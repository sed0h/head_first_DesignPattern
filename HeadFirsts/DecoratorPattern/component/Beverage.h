#pragma once
#include <string>

class Beverage {
 private:
  std::string description;

 public:
  Beverage();
  virtual std::string getDescription();
  virtual double cost()=0;
};
