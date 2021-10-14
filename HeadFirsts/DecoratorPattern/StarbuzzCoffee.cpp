#include <iostream>

#include "component/DarkRoast.h"
#include "component/Espresso.h"
#include "decorator/Mocha.h"
#include "decorator/Whip.h"

int main() {
  Beverage *beverage = new Espresso();
  std::cout << beverage->getDescription() << " $" << beverage->cost() << "\n";

  Beverage *beverage2 = new DarkRoast();
  beverage2 = new Mocha(beverage2);
  beverage2 = new Mocha(beverage2);
  beverage2 = new Whip(beverage2);

  std::cout << beverage2->getDescription() << " $" << beverage2->cost();
  return 0;
}