#pragma once
#include "Command.h"

class Stereo;

class StereoOffCommand : public Command {
 public:
  StereoOffCommand(Stereo *ste);
  void execute();

  private:
  Stereo *_stereo;
};
