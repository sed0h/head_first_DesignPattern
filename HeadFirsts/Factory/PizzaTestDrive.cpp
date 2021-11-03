#include "NYPizzaStore.h"
#include "Pizza.h"
#include "PizzaStore.h"

int main() {
  PizzaStore *nyStore = new NYPizzaStore();
  // PizzaStore *chicagoStore = new ChicagoPizzaStore();

  Pizza *pizza = nyStore->createPizza("CHEESE");
  std::cout << "Ethan ordered a " << pizza->getName();

  return 0;
}