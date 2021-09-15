#pragma once
#include "Observer.h"
#include "../d/DisplayElement.h"

class ForecastDisplay : public Observer, public DisplayElement {
 public: 
	void update();
	void display();
};
