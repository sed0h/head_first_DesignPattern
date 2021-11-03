#pragma once
#include "Pizza.h"
class ChicagoStyleCheesePizza : public Pizza {
 public:
  ChicagoStyleCheesePizza(std::string pizza_name, std::string pizza_dough,
                          std::string pizza_sauce, std::string pizza_topping);
  void cut();
};
