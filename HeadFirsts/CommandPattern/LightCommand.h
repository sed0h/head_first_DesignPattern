#pragma once
#include "Command.h"
class Light;

class LightOnCommand : public Command {
 public:
  LightOnCommand(Light *light);
  virtual void execute();
  virtual void undo();

  private:
  Light *_light;
};

class LightOffCommand : public Command {
 public:
  LightOffCommand(Light *lt);
  void execute();
  virtual void undo();

 private:
  Light *_light;
};