#include "LightOnCommand.h"
#include "Light.h"

LightOnCommand::LightOnCommand(Light* light) { _light = light; }

void LightOnCommand::execute() { _light->on(); }
