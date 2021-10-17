#pragma once
#include <iostream>

class PizzaStore {
 public:
  PizzaStore();
  virtual ~PizzaStore();
  virtual void createPiza(std::string material);
  
private:
  void orderPizza(std::string material);
};
