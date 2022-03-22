#include "GarageDoor.h"
#include <iostream>

GarageDoor::GarageDoor(string g_d) { _location = g_d; }

void GarageDoor::up() { std::cout << (_location +" Garage Door is Open\n"); }

void GarageDoor::down() { std::cout << (_location + " Garage Door is Closed\n"); }
