#pragma once
#include <iostream>
class Pizza;

class PizzaStore {
 public:
  PizzaStore();
  virtual ~PizzaStore();
  virtual Pizza* createPizza(std::string pizza_name);
  
private:
  Pizza* orderPizza(std::string pizza_name);
  Pizza *_pizza;
};
