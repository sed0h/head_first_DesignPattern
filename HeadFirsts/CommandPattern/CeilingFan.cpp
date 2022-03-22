#include "CeilingFan.h"
#include <iostream>

CeilingFan::CeilingFan(string c_n) {
  _location = c_n;
  _speed = OFF;
}

void CeilingFan::on() { std::cout << (_location + " ceiling fan is on\n"); }

void CeilingFan::medium() {
  _speed = MEDIUM;
  std::cout << (_location + " ceiling fan is on MEDIUM\n");
}

void CeilingFan::low() {
  _speed = LOW;
  std::cout << (_location + " ceiling fan is on LOW\n");
}

void CeilingFan::off() {
  _speed = OFF;
  std::cout << (_location + " ceiling fan is off\n");
}

void CeilingFan::high() {
  _speed = HIGH;
  std::cout << (_location + " ceiling fan is on HIGH\n");
}

SPEED_t CeilingFan::getSpeed() { return _speed; }

