#include <Wire.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#define relay1 12
#define relay2 14

// Credentials are stored separately in secrets.h (excluded from version control)
#include "secrets.h"
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = WIFI_SSID;
char pass[] = WIFI_PASS;

BLYNK_WRITE(V0) {
  bool value1 = param.asInt();
  digitalWrite(relay1, value1 == 1 ? LOW : HIGH);
}

BLYNK_WRITE(V1) {
  bool value2 = param.asInt();
  digitalWrite(relay2, value2 == 1 ? LOW : HIGH);
}

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);

  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  Blynk.run();
}
