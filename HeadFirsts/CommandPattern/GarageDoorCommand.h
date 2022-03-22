#pragma once
#include "Command.h"
class GarageDoor;

class GarageDoorUpCommand : public Command{
 public:
	GarageDoorUpCommand(GarageDoor *garageDoor);
	void execute();
    void undo();

private:
    GarageDoor *_garageDoor;
};

class GarageDoorDownCommand : public Command {
 public:
  GarageDoorDownCommand(GarageDoor *garageDoor);
  void execute();
  void undo();

 private:
  GarageDoor *_garageDoor;
};