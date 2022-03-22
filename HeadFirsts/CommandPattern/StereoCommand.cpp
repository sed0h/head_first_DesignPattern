#include "StereoCommand.h"

#include "Stereo.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo* ste) { _stereo = ste; }

void StereoOnWithCDCommand::execute() {
  _stereo->on();
  _stereo->setCD();
  _stereo->setVolume(11);
}

void StereoOnWithCDCommand::undo() { _stereo->off(); }

StereoOffCommand::StereoOffCommand(Stereo* ste) { _stereo = ste; }

void StereoOffCommand::execute() { _stereo->off(); }

void StereoOffCommand::undo() {
  _stereo->on();
  _stereo->setCD();
}
