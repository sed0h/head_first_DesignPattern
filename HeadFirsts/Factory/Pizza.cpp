#include "Pizza.h"

Pizza::Pizza(std::string pizza_name)
    : _name(pizza_name),
      _dough(""),
      _sauce("") {
  
  
}

Pizza::Pizza() {}

void Pizza::prepare() {
  std::cout << "Preparing " << _name << "\n"
            << "Tossing dough..."
            << "\n"
            << "Adding sauce..."
            << "\n"
            << "Adding toppings:"
            << "\n";
  for (size_t i = 0; i < _toppings.size(); i++) {
    std::cout << _toppings.at(i);
  }
}

void Pizza::bake() { std::cout << "Bake for 25 minutes at 350\n"; }

void Pizza::cut() { std::cout << "Cutting the pizza into diagonal slices\n"; }

void Pizza::box() { std::cout << "Place pizza in official PizzaStore box\n"; }

std::string Pizza::getName() { return _name; }
