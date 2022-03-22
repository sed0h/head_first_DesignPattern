#pragma once
#include "Command.h"

class Stereo;

class StereoOnWithCDCommand : public Command {
 public:
  StereoOnWithCDCommand(Stereo *ste);
  void execute();
  void undo();

 private:
  Stereo *_stereo;
};

class StereoOffCommand : public Command {
 public:
  StereoOffCommand(Stereo *ste);
  void execute();
  void undo();

 private:
  Stereo *_stereo;
};
