#pragma once
#include "Command.h"
class GarageDoor;

class GarageDoorOpenCommand : public Command{
 public:
	GarageDoorOpenCommand(GarageDoor *garageDoor);
	void execute();

private:
        GarageDoor *_garageDoor;
};
