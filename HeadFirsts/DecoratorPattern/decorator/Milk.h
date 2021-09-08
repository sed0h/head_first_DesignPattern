#pragma once
#include "CondimentDecorator.h"
//#include <string>

class Beverage;

class Milk : public CondimentDecorator {
 private:
  Beverage *beverage;

 public:
  Milk(Beverage *beverage);
  float cost();
  std::string getDescription();
};
