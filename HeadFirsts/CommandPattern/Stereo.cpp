#include "Stereo.h"

#include <iostream>

Stereo::Stereo(string name) { _name = name; }

void Stereo::on() { std::cout << (_name + "stereo is on\n"); }

void Stereo::off() { std::cout << (_name + "stereo is off\n"); }

void Stereo::setCD() { std::cout << (_name + "stereo is set for CD input\n"); }

void Stereo::setVolume(int v) {
  std::cout << (_name + "stereo volume set to 11\n");
}
