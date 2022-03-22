#include "TV.h"
#include <iostream>

TV::TV(string location) { _location = location; }

void TV::on() { std::cout << (_location + "TV is on\n"); }

void TV::off() { std::cout << (_location + "TV is off\n"); }

