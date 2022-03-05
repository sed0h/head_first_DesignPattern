#pragma once
#include <string>
#include <vector>

class Command;

class RemoteControl {
 public:
  RemoteControl();
  ~RemoteControl();
  void setCommand(int slot, Command *onCommand, Command *offCommand);
  void onButtonWasPushed(int slot);
  void offButtonWasPushed(int slot);
  std::string toString();

 private:
  std::vector<Command *> _onCommands;
  std::vector<Command *> _offCommands;
};
