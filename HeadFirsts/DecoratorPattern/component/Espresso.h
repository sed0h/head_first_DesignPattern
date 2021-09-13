#pragma once
#include "Beverage.h"
class Espresso : public Beverage {
 private:
  std::string description;

 public:
  Espresso();
  std::string getDescription();
  double cost();
};
