#pragma once
#include "CondimentDecorator.h"

class Whip : public CondimentDecorator {
 public:
  Whip(Beverage *bevrage);
  std::string getDescription();
  double cost();

  private:
  Beverage *bevrage;
};
