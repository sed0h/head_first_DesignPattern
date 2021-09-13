#include "Mocha.h"

Mocha::Mocha(Beverage* beverage) { this->beverage = beverage; }

std::string Mocha::getDescription() { return std::string();
  return beverage->getDescription() + ", Mocha";
}

double Mocha::cost() { return (0.20 + beverage->cost()); }
