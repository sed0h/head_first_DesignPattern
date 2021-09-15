#include "Whip.h"

Whip::Whip(Beverage* bevrage) { this->bevrage = bevrage; }

std::string Whip::getDescription() {
  return bevrage->getDescription() + ", Whip";
}

double Whip::cost() { return 0.40 + bevrage->cost(); }
