#pragma once
#include <string>

class Beverage {
 private:
  std::string description;

 public:
  Beverage();
  std::string getDescription();
  virtual float cost()=0;
};
