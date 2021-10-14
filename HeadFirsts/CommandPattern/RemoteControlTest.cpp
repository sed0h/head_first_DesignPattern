#include "Light.h"
#include "LightOnCommand.h"
#include "SimpleRemoteControl.h"

int main() {
  SimpleRemoteControl *remote = new SimpleRemoteControl();
  Light *light = new Light("a LIGHT");
  LightOnCommand *lightOn = new LightOnCommand(light);

  remote->setCommand(lightOn);
  remote->buttonWasPressed();
  return 0;
}