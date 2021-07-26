#include "ModelDuck.h"
#include "../f/FlyNoWay.h"
#include "../q/Quack.h"
#include <iostream>

using std::cout;
ModelDuck::ModelDuck() { 
	flyBehavior = new FlyNoWay(); 
	quackBehavior = new Quack();

}

void ModelDuck::display() { std::cout << "I'm a model duck"; }
