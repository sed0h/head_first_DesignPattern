#pragma once
#include "Beverage.h"
class Expresso : public Beverage {
 private:
  std::string description;

 public:
  Expresso();
  float cost();
};
