#include "Milk.h"

Milk::Milk(Beverage *beverage) { this->beverage = beverage; }

float Milk::cost() { return 0.20f + beverage->cost(); }

std::string Milk::getDescription() { return beverage->getDescription() + ", Milk"; }
