#include "MacroCommand.h"

MacroCommand::MacroCommand(std::vector<Command*>* commands) {
  _commands = commands;
}

void MacroCommand::execute() {
  for (std::vector<Command*>::iterator it = _commands->begin(); it!=_commands->end(); it++) {
    (*it)->execute();
  }
}

void MacroCommand::undo() {
  for (std::vector<Command*>::iterator it = _commands->begin();
       it != _commands->end(); it++) {
    (*it)->undo();
  }
}
