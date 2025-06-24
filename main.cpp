#include <Arduino.h>
#include "mesh.h"
#include "message.h"

void setup() {
  Serial.begin(115200);
  initMesh();
  Serial.println("Mesh Messenger Started.");
}

void loop() {
  meshUpdate();
  checkForMessages();
  delay(100);
}
