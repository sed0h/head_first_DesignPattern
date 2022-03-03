#include "RemoteControl.h"

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
