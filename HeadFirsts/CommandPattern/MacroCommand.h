#pragma once
#include "Command.h"
#include <vector>

class MacroCommand : public Command {
 public:
  MacroCommand(std::vector<Command*> *commands);
  void execute();
  void undo();

  private:
  std::vector<Command *> *_commands;
};
