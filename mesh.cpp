#include <painlessMesh.h>
#include "mesh.h"

#define MESH_PREFIX "OfflineMesh"
#define MESH_PASSWORD "meshpassword"
#define MESH_PORT 5555

Scheduler userScheduler;
painlessMesh mesh;

void receivedCallback(uint32_t from, String &msg) {
  Serial.printf("Received from %u: %s\n", from, msg.c_str());
}

void initMesh() {
  mesh.setDebugMsgTypes(ERROR | STARTUP | CONNECTION);
  mesh.init(MESH_PREFIX, MESH_PASSWORD, &userScheduler, MESH_PORT);
  mesh.onReceive(&receivedCallback);
}

void meshUpdate() {
  mesh.update();
}
