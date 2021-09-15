#pragma once
#include "Beverage.h"
class DarkRoast : public Beverage {
 private:
  std::string description;

 public:
  DarkRoast();
  std::string getDescription();
  double cost();
};
