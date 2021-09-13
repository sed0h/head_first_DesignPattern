#pragma once
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator {
 public:
  Mocha(Beverage *beverage);
  std::string getDescription();
  double cost();

 private:
  Beverage *beverage;
};
