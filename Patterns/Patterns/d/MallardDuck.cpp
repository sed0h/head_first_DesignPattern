#include "MallardDuck.h"

#include <iostream>

#include "../f/FlyWithWings.h"
#include "../q/Quack.h"

using std::cout;
MallardDuck::MallardDuck() {
  quackBehavior = new Quack();
  flyBehavior = new FlyWithWings();
}

MallardDuck::~MallardDuck() {}

void MallardDuck::display() { std::cout << "i'm a real Mallard duck\n"; }
