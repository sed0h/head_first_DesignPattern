#pragma once
#include "../component/Beverage.h"
class CondimentDecorator : public Beverage {
 public:
  virtual std::string getDescription()=0;
};
