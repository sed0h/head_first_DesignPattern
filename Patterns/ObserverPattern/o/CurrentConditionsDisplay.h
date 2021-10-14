#pragma once
#include "../d/DisplayElement.h"
//#include "../s/Subject.h"
#include "Observer.h"
class Subject;

class CurrentConditionsDisplay : public Observer, public DisplayElement {
 public:
  CurrentConditionsDisplay(Subject *weatherData);
  void update(float temperature, float humidity, float pressure);
  void display();

 private:
  float _temperature;
  float _humidity;
  Subject *_weatherData;
};
