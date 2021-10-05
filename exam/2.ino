void Line_Notify1(String message1) ;
#include <ESP8266WiFi.h>
#define WIFI_SSID "@TOT_Trerapon_2.4G" /////////////*************แก้
#define WIFI_PASSWORD "0805288951"////////**************แก้
#define LINE_TOKEN_PIR "BwIYuxUfWLI2VAbYiCXPrNdI9iYSfLldvLB8RQVGX9m" ////***************แก้
#define PirPin D6

String message1 = "%E0%B8%A1%E0%B8%B5%E0%B8%82%E0%B9%89%E0%B8%AD%E0%B8%84%E0%B8%A7%E0%B8%B2%E0%B8%A1%E0%B9%80%E0%B8%82%E0%B9%89%E0%B8%B2";//****************แก้
bool beep_state = false;
bool send_state = false;
uint32_t ts, ts1, ts2;
void setup() {
  Serial.begin(115200);
  Serial.println();
  pinMode(PirPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
 // dht.begin();
  Serial.println("connecting");
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  delay(10000);
  Serial.println("Pir Ready!!");
  //read_sensor();
  ts = ts1 = ts2 = millis();
}
void loop() {
  ts = millis();
  if (WiFi.status() == WL_CONNECTED) {
    digitalWrite(LED_BUILTIN, LOW);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);
  }
    
  if ((ts - ts1 >= 5000) && (beep_state == true)) {
    beep_state = false;
  } 
  
  if ((digitalRead(PirPin) == HIGH) && (beep_state == false) && (WiFi.status() == WL_CONNECTED)) {
    while (digitalRead(PirPin) == HIGH) delay(100);
    Serial.println("Detect !");
    Line_Notify1(message1);
    beep_state = true;
  }
  delay(10);
}


void Line_Notify1(String message) {
  WiFiClientSecure client;
  if (!client.connect("notify-api.line.me", 443)) {
    Serial.println("connection failed");
    delay(2000);
    return;
  }
  String req = "";
  req += "POST /api/notify HTTP/1.1\r\n";
  req += "Host: notify-api.line.me\r\n";
  req += "Authorization: Bearer " + String(LINE_TOKEN_PIR) + "\r\n";
  req += "Cache-Control: no-cache\r\n";
  req += "User-Agent: ESP8266\r\n";
  req += "Content-Type: application/x-www-form-urlencoded\r\n";
  req += "Content-Length: " + String(String("message=" + message1).length()) + "\r\n";
  req += "\r\n";
  req += "message=" + message1;
  // Serial.println(req);
  client.print(req);
  delay(20);
  while (client.connected()) {
    String line = client.readStringUntil('\n');
    if (line == "\r") {
      break;
    }
  }
}
