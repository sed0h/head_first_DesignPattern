#include "ChicagoStyleCheesePizza.h"

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza(std::string pizza_name,
                                                 std::string pizza_dough,
                                                 std::string pizza_sauce,
                                                 std::string pizza_topping) {
  Pizza *p = new Pizza(pizza_name);
}

void ChicagoStyleCheesePizza::cut() {
  std::cout << "Cutting the pizza into square slice\n";
}
