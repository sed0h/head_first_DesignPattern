#include "Light.h"
#include "LightOnCommand.h"
#include "SimpleRemoteControl.h"
#include "GarageDoor.h"
#include "GarageDoorOpenCommand.h"

int main() {
  SimpleRemoteControl *remote = new SimpleRemoteControl();
  Light *light = new Light("a LIGHT");
  LightOnCommand *lightOn = new LightOnCommand(light);

  remote->setCommand(lightOn);
  remote->buttonWasPressed();

  GarageDoor *garageDoor = new GarageDoor();
  GarageDoorOpenCommand *garageOpen = new GarageDoorOpenCommand(garageDoor);

  remote->setCommand(garageOpen);
  remote->buttonWasPressed();

  return 0;
}