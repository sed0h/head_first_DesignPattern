#include "RemoteControl.h"

#include <typeinfo>

#include "Command.h"

#ifndef SLOT_CNT
#define SLOT_CNT 7
#endif  // !1

RemoteControlWithUndo::RemoteControlWithUndo() {
  _onCommands.resize(SLOT_CNT);
  _offCommands.resize(SLOT_CNT);
  NoCommand* noCommand = new NoCommand();

  for (size_t i = 0; i < SLOT_CNT; i++) {
    _onCommands.at(i) = noCommand;
    _offCommands.at(i) = noCommand;
  }
  _undoCommand = noCommand;
}

RemoteControlWithUndo::~RemoteControlWithUndo() {}

void RemoteControlWithUndo::setCommand(int slot, Command* onCommand,
                               Command* offCommand) {
  _onCommands[slot] = onCommand;
  _offCommands[slot] = offCommand;
}

void RemoteControlWithUndo::onButtonWasPushed(int slot) {
  _onCommands[slot]->execute();
  _undoCommand = _onCommands[slot];
}

void RemoteControlWithUndo::offButtonWasPushed(int slot) {
  _offCommands[slot]->execute();
  _undoCommand = _offCommands[slot];
}

std::string RemoteControlWithUndo::toString() {
  std::string stringBuff = "\n------ Remote Control ------\n";
  for (size_t i = 0; i < _onCommands.size(); i++) {
    stringBuff.append("[slot  " + std::to_string(i) + "] ");
    stringBuff.append(typeid((_onCommands[i])).name()); 
    stringBuff.append("   ");
    stringBuff.append(typeid((_offCommands[i])).name());
    stringBuff.append("\n");
  }
  stringBuff.append("[undo] ");
  stringBuff.append(typeid(_undoCommand).name());
  stringBuff.append("\n");
  return stringBuff;
}

void RemoteControlWithUndo::undoButtonWasPushed() { 
    _undoCommand->undo();
}
