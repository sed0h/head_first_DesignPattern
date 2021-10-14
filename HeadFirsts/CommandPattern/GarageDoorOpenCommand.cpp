#include "GarageDoorOpenCommand.h"
#include "GarageDoor.h"

GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor* garageDoor) {
  _garageDoor = garageDoor;
}

void GarageDoorOpenCommand::execute() { _garageDoor->up(); }

