#include "StereoOnWithCDCommand.h"

#include "Stereo.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo* ste) { _stereo = ste; }

void StereoOnWithCDCommand::execute() {
  _stereo->on();
  _stereo->setCD();
  _stereo->setVolume(11);
}
