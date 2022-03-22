#pragma once
class Command {
 public:
  Command();
  virtual ~Command();
  virtual void execute() = 0;
  virtual void undo() = 0;
};

class NoCommand : public Command {
 public:
  NoCommand();
  virtual void execute();
  virtual void undo();
};