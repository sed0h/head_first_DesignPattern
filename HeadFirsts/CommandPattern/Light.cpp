#include "Light.h"

#include <iostream>

Light::Light(string light_name) { _name = light_name; }

void Light::on() { std::cout << (_name + "light is on\n"); }

void Light::off() { std::cout << _name << "light is off\n"; }
