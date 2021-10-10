#pragma once
class Command;

class SimpleRemoteControl {
 public:
  SimpleRemoteControl();
  void setCommand(Command *command);
  void buttonWasPressed();

  private:
  Command *_slot;
};
