#include "component/Expresso.h"
#include <iostream>

int main() {
  Beverage *beverage = new Expresso();
  std::cout << beverage->getDescription() << " $" << beverage->cost();

  //Beverage *beverage2 = new DarkRoast();
  return 0;
}