#include "GarageDoorCommand.h"
#include "GarageDoor.h"

GarageDoorUpCommand::GarageDoorUpCommand(GarageDoor* garageDoor) {
  _garageDoor = garageDoor;
}

void GarageDoorUpCommand::execute() { _garageDoor->up(); }

void GarageDoorUpCommand::undo() { _garageDoor->down(); }

GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor* garageDoor) {
  _garageDoor = garageDoor;
}

void GarageDoorDownCommand::execute() { _garageDoor->down(); }

void GarageDoorDownCommand::undo() { _garageDoor->up(); }
