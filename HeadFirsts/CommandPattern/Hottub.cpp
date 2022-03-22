#include "Hottub.h"
#include <iostream>

Hottub::Hottub() { }

void Hottub::on() {
  std::cout
      << ("Hottub is heating to a steaming 104 degrees\nHottub is bubbling!");
}
								 

void Hottub::off() { std::cout << ("Hottub is cooling to 98 degrees\n"); }