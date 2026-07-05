#include <Arduino.h>
#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <ESP32Servo.h>

// ================= WIFI =================
const char* ssid = "RobotArm_Vikas_Vishal_Sudhir_thakur";
const char* password = "12345678";

AsyncWebServer server(80);
AsyncWebSocket ws("/ws");

// ================= MOTOR PINS =================
#define IN1 32
#define IN2 15
#define IN3 18
#define IN4 19

// ================= LED =================
#define LED1 4
#define LED2 2

// ================= SERVO =================
struct ServoData {
  Servo servo;
  int pin;
  int value;
};

// SAFE PINS (removed GPIO33 conflict)
std::vector<ServoData> servos = {
  {Servo(), 13, 90},
  {Servo(), 14, 90},
  {Servo(), 27, 90},
  {Servo(), 26, 90},
  {Servo(), 25, 90},
  {Servo(), 12, 90},
  {Servo(), 16, 90}   // FIXED (was 33)
};

// ================= FRAME MEMORY =================
struct Frame {
  int servo[7];
  String motor;
  bool led1;
  bool led2;
};

std::vector<Frame> recordData;

bool isRecording = false;
bool isPlaying = false;

String motorState = "STOP";
bool led1State = false;
bool led2State = false;

// LIMIT MEMORY (prevents crash)
const int MAX_RECORD = 200;

// ================= MOTOR CONTROL =================
void forward() {
  digitalWrite(IN1, 1); digitalWrite(IN2, 0);
  digitalWrite(IN3, 1); digitalWrite(IN4, 0);
  motorState = "F";
}

void backward() {
  digitalWrite(IN1, 0); digitalWrite(IN2, 1);
  digitalWrite(IN3, 0); digitalWrite(IN4, 1);
  motorState = "B";
}

void left() {
  digitalWrite(IN1, 0); digitalWrite(IN2, 1);
  digitalWrite(IN3, 1); digitalWrite(IN4, 0);
  motorState = "L";
}

void right() {
  digitalWrite(IN1, 1); digitalWrite(IN2, 0);
  digitalWrite(IN3, 0); digitalWrite(IN4, 1);
  motorState = "R";
}

void stopMotor() {
  digitalWrite(IN1, 0); digitalWrite(IN2, 0);
  digitalWrite(IN3, 0); digitalWrite(IN4, 0);
  motorState = "STOP";
}

// ================= SAFE SERVO PARSER =================
void handleServo(String msg) {
  int comma = msg.indexOf(',');
  if (comma == -1) return;

  int index = msg.substring(1, comma).toInt() - 1;
  int value = msg.substring(comma + 1).toInt();

  if (index < 0 || index >= servos.size()) return;

  servos[index].servo.write(value);
  servos[index].value = value;
}

// ================= WEB SOCKET =================
void onWsEvent(AsyncWebSocket *server,
               AsyncWebSocketClient *client,
               AwsEventType type,
               void *arg,
               uint8_t *data,
               size_t len) {

  if (type != WS_EVT_DATA) return;

  String msg = "";
  for (int i = 0; i < len; i++) msg += (char)data[i];

  // MOTOR
  if (msg == "F") forward();
  else if (msg == "B") backward();
  else if (msg == "L") left();
  else if (msg == "R") right();
  else if (msg == "S") stopMotor();

  // LED
  else if (msg == "A") {
    led1State = !led1State;
    digitalWrite(LED1, led1State);
  }
  else if (msg == "C") {
    led2State = !led2State;
    digitalWrite(LED2, led2State);
  }

  // RECORD CONTROL
  else if (msg == "SAVE") isRecording = !isRecording;
  else if (msg == "CLEAR") recordData.clear();
  else if (msg == "PLAY") isPlaying = true;

  // SERVO
  else if (msg.startsWith("S")) {
    handleServo(msg);
  }
}

// ================= SETUP =================
void setup() {
  Serial.begin(115200);

  // SERVO INIT
  for (auto &s : servos) {
    s.servo.attach(s.pin);
    s.servo.write(90);
  }

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  WiFi.softAP(ssid, password);

  ws.onEvent(onWsEvent);
  server.addHandler(&ws);

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", "Robot Ready");
  });

  server.begin();
}

// ================= LOOP =================
void loop() {
  ws.cleanupClients();

  // ================= RECORD =================
  if (isRecording && recordData.size() < MAX_RECORD) {

    Frame f;

    for (int i = 0; i < 7; i++)
      f.servo[i] = servos[i].value;

    f.motor = motorState;
    f.led1 = led1State;
    f.led2 = led2State;

    recordData.push_back(f);
    delay(120);
  }

  // ================= PLAY =================
  if (isPlaying) {

    for (auto &f : recordData) {

      for (int i = 0; i < 7; i++) {
        servos[i].servo.write(f.servo[i]);
        servos[i].value = f.servo[i];
      }

      if (f.motor == "F") forward();
      else if (f.motor == "B") backward();
      else if (f.motor == "L") left();
      else if (f.motor == "R") right();
      else stopMotor();

      digitalWrite(LED1, f.led1);
      digitalWrite(LED2, f.led2);

      delay(150);
    }

    stopMotor();
    isPlaying = false;
  }
}
