#pragma once
#include "../d/DisplayElement.h"
#include "Observer.h"
#include <vector>
class Subject;

class StatisticsDisplay : public Observer, public DisplayElement {
 private:
  float _temperature;
  Subject *_weatherData;
  std::vector<float> _temperatures;

 public: 
	StatisticsDisplay(Subject *WeatherData);
	void update(float temperature, float humidity, float pressure);
	void display();
};
