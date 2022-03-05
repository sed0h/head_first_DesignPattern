#include "StereoOffCommand.h"

#include "Stereo.h"

StereoOffCommand::StereoOffCommand(Stereo* ste) { _stereo = ste; }

void StereoOffCommand::execute() { _stereo->off(); }
