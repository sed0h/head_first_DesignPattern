#include "Espresso.h"

Espresso::Espresso() { description = "Espresso"; }

std::string Espresso::getDescription() { return description; }

double Espresso::cost() { return 1.99f; }
