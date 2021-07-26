#pragma once
#include "Observer.h"
#include "DisplayElement.h"

class StatisticsDisplay : public Observer, public DisplayElement {
 public: 
	void update();
	void display();
};
