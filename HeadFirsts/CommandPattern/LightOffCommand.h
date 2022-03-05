#pragma once
#include "Command.h"

class Light;

class LightOffCommand : public Command {
 public:
  LightOffCommand(Light *lt);
  void execute();

 private:
  Light *_light;
};
