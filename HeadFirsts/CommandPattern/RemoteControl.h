#pragma once
#include <vector>

class Command;

class RemoteControl {
 public:
  RemoteControl();
  ~RemoteControl();
  void setCommand(int slot, Command *onCommand, Command *offCommand);

 private:
  std::vector<Command*> _onCommands;
  std::vector<Command*> _offCommands;
};
