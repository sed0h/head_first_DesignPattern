#pragma once
#include "Observer.h"
#include "DisplayElement.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement {
 public:
  void update();
  void display();
};
