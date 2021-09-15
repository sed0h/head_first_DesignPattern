#pragma once
#include "Observer.h"
#include "../d/DisplayElement.h"

class ThirdPartyDisplay : public Observer, public DisplayElement {
 public:
  void update();
  void display();
};
