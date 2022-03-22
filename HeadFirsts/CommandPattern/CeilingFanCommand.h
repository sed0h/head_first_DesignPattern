#pragma once
#include "Command.h"
#include "CeilingFan.h"

class CeilingFan;

class CeilingFanOnCommand : public Command {
 public:
  CeilingFanOnCommand(CeilingFan *cf);
  virtual void execute();
  void undo();

private:
	CeilingFan *_ceilingFan;
	SPEED_t _prevSpeed;
};

class CeilingFanOffCommand :public Command {
 public:
  CeilingFanOffCommand(CeilingFan *cf);
  virtual void execute();
  void undo();

 private:
  CeilingFan *_ceilingFan;
  SPEED_t _prevSpeed;
};

class CeilingFanHighCommand : public Command {
 public:
  CeilingFanHighCommand(CeilingFan *cf);
  ~CeilingFanHighCommand();
  void execute();
  void undo();

 private:
  CeilingFan *_ceilingFan;
  SPEED_t _prevSpeed;
};

class CeilingFanMediumCommand : public Command {
 public:
  CeilingFanMediumCommand(CeilingFan *cf);
  ~CeilingFanMediumCommand();
  void execute();
  void undo();

  private:
	CeilingFan *_ceilingFan;
	SPEED_t _prevSpeed;
};