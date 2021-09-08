#pragma once
#include "Observer.h"
#include "DisplayElement.h"

class ForecastDisplay : public Observer, public DisplayElement {
 public: 
	void update();
	void display();
};
