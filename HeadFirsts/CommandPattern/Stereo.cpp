#include "Stereo.h"

#include <iostream>

Stereo::Stereo(string name) { _location = name; }

void Stereo::on() { std::cout << (_location + " stereo is on\n"); }

void Stereo::off() { std::cout << (_location + " stereo is off\n"); }

void Stereo::setCD() { std::cout << (_location + " stereo is set for CD input\n"); }

void Stereo::setVolume(int v) {
  std::cout << (_location + " stereo volume set to ") << v << "\n";
}
