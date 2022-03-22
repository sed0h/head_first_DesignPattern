#pragma once
#include <string>
#include <vector>

class Command;

class RemoteControlWithUndo {
 public:
  RemoteControlWithUndo();
  ~RemoteControlWithUndo();
  void setCommand(int slot, Command *onCommand, Command *offCommand);
  void onButtonWasPushed(int slot);
  void offButtonWasPushed(int slot);
  std::string toString();
  void undoButtonWasPushed();

 private:
  std::vector<Command*> _onCommands;
  std::vector<Command*> _offCommands;
  Command *_undoCommand;
};
