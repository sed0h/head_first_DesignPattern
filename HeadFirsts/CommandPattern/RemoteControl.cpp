#include "RemoteControl.h"

#include <typeinfo>

#include "Command.h"

#ifndef SLOT_CNT
#define SLOT_CNT 7
#endif  // !1

RemoteControl::RemoteControl() {
  _onCommands.resize(SLOT_CNT);
  _offCommands.resize(SLOT_CNT);
  for (size_t i = 0; i < SLOT_CNT; i++) {
    _onCommands.at(i) = nullptr;
    _offCommands.at(i) = nullptr;
  }
}

RemoteControl::~RemoteControl() {}

void RemoteControl::setCommand(int slot, Command* onCommand,
                               Command* offCommand) {
  _onCommands.at(slot) = onCommand;
  _offCommands.at(slot) = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot) {
  _onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(int slot) {
  _offCommands[slot]->execute();
}

std::string RemoteControl::toString() {
  std::string stringBuff = "\n------ Remote Control ------\n";
  for (size_t i = 0; i < _onCommands.size(); i++) {
    stringBuff + "[slot  " + std::to_string(i) + "] " +
        typeid(_onCommands[i]).name() + "   " + typeid(_offCommands[i]).name() +
        "\n";
  }
  return stringBuff;
}
