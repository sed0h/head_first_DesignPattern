#pragma once
#include "Command.h"
class Light;

class LightOnCommand : public Command {
 public:
  LightOnCommand(Light *light);
  virtual void execute();

  private:
  Light *_light;
};
