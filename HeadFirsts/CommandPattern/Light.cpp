#include "Light.h"

#include <iostream>

Light::Light(string light_name) { _location = light_name; }

void Light::on() { std::cout << (_location + " light is on\n"); }

void Light::off() { std::cout << _location << " light is off\n"; }
