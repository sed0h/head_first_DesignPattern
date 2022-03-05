#include "LightOffCommand.h"

#include "Light.h"

LightOffCommand::LightOffCommand(Light *lt) { _light = lt; }

void LightOffCommand::execute() { _light->off(); }
