#include "CurrentConditionsDisplay.h"
#include "../s/Subject.h"
#include <iostream>

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *weatherData) {
  this->_weatherData = weatherData;
  weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure) {
  this->_humidity = humidity;
  this->_temperature = temperature;
  display();
}

void CurrentConditionsDisplay::display() {
  std::cout << "Current conditions: " << _temperature << "F degrees and"
            << _humidity << "% humidity";
}
