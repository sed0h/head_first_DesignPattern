#include "PizzaStore.h"
#include "Pizza.h"

PizzaStore::PizzaStore() {

}

PizzaStore::~PizzaStore() {}

Pizza* PizzaStore::createPizza(std::string pizza_name) {
  _pizza = new Pizza(pizza_name);

  return _pizza;
}

Pizza* PizzaStore::orderPizza(std::string pizza_name) {
  return createPizza(pizza_name);
}

