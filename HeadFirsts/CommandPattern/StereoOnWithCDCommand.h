#pragma once
#include "Command.h"

class Stereo;

class StereoOnWithCDCommand : public Command {
 public:
  StereoOnWithCDCommand(Stereo *ste);
  void execute();

 private:
  Stereo *_stereo;
};
