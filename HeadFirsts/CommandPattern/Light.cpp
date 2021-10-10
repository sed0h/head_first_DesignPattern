#include "Light.h"
#include <iostream>

Light::Light(string light_name) { _name = light_name; }

void Light::on() { std::cout << "light is on\n"; }

void Light::off() {}
