#include <Arduino.h>
#include <painlessMesh.h>
#include "mesh.h"
#include "message.h"

extern painlessMesh mesh;

void checkForMessages() {
  if (Serial.available()) {
    String msg = Serial.readStringUntil('\n');
    mesh.sendBroadcast(msg);
    Serial.println("Broadcasted: " + msg);
  }
}
