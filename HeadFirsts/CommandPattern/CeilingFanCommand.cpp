#include "CeilingFanCommand.h"
#include "CeilingFan.h"

CeilingFanOnCommand::CeilingFanOnCommand(CeilingFan* cf) { _ceilingFan = cf; }

void CeilingFanOnCommand::execute() { 
    _prevSpeed = _ceilingFan->getSpeed();
    _ceilingFan->on(); 
}

void CeilingFanOnCommand::undo() { 
  if (HIGH == _prevSpeed) {
    _ceilingFan->high();
  } else if (MEDIUM == _prevSpeed) {
    _ceilingFan->medium();
  } else if (LOW == _prevSpeed) {
    _ceilingFan->low();
  } else if (OFF == _prevSpeed) {
    _ceilingFan->off();
  }
}

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan* cf) {
    _ceilingFan = cf;
}

void CeilingFanOffCommand::execute() {   
    _prevSpeed = _ceilingFan->getSpeed();
    _ceilingFan->off();
}

void CeilingFanOffCommand::undo() { 
  if (HIGH == _prevSpeed) {
    _ceilingFan->high();
  } else if (MEDIUM == _prevSpeed) {
    _ceilingFan->medium();
  } else if (LOW == _prevSpeed) {
    _ceilingFan->low();
  } else if (OFF == _prevSpeed) {
    _ceilingFan->off();
  }
}

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan* cf) {
  _ceilingFan = cf;
}

CeilingFanHighCommand::~CeilingFanHighCommand() {}

void CeilingFanHighCommand::execute() {
    _prevSpeed = _ceilingFan->getSpeed();
    _ceilingFan->high();
}

void CeilingFanHighCommand::undo() {
  if (HIGH == _prevSpeed) {
    _ceilingFan->high();
  } else if (MEDIUM == _prevSpeed) {
    _ceilingFan->medium();
  } else if (LOW == _prevSpeed) {
    _ceilingFan->low();
  } else if (OFF == _prevSpeed) {
    _ceilingFan->off();
  }
}

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan* cf) {
  _ceilingFan = cf;
}

CeilingFanMediumCommand::~CeilingFanMediumCommand() {}

void CeilingFanMediumCommand::execute() { 
    _prevSpeed = _ceilingFan->getSpeed();
    _ceilingFan->medium(); 
}

void CeilingFanMediumCommand::undo() {
  if (HIGH == _prevSpeed) {
    _ceilingFan->high();
  } else if (MEDIUM == _prevSpeed) {
    _ceilingFan->medium();
  } else if (LOW == _prevSpeed) {
    _ceilingFan->low();
  } else if (OFF == _prevSpeed) {
    _ceilingFan->off();
  }
}
