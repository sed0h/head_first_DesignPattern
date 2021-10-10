#include "SimpleRemoteControl.h"
#include "Command.h"

SimpleRemoteControl::SimpleRemoteControl() {}

void SimpleRemoteControl::setCommand(Command *command) { _slot = command; }

void SimpleRemoteControl::buttonWasPressed() { _slot->execute(); }
