#include "StatisticsDisplay.h"

#include <iostream>

#include "../s/WeatherData.h"

StatisticsDisplay::StatisticsDisplay(Subject* WeatherData) {
  this->_weatherData = WeatherData;
  WeatherData->registerObserver(this);
}

void StatisticsDisplay::update(float temperature, float humidity, float pressure) {
  this->_temperature = temperature;
  _temperatures.push_back(temperature);
  display();
}

void StatisticsDisplay::display() {
  float max = 0;
  if (_temperatures.size() > 0) {
    max = _temperatures.back();
  }

  for (std::vector<float>::iterator it = _temperatures.begin();
       it != _temperatures.end(); it++) {
  }

  std::cout << "Avg/Max/Min temperature= " << _temperature << "F degrees";
}
