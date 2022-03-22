#include "LightCommand.h"
#include "Light.h"

LightOnCommand::LightOnCommand(Light* light) { _light = light; }

void LightOnCommand::execute() { _light->on(); }

void LightOnCommand::undo() { _light->off(); }

LightOffCommand::LightOffCommand(Light* lt) { _light = lt; }

void LightOffCommand::execute() { _light->off(); }

void LightOffCommand::undo() { _light->on(); }
