#pragma once
#include "Observer.h"
#include "DisplayElement.h"

class ThirdPartyDisplay : public Observer, public DisplayElement {
 public:
  void update();
  void display();
};
