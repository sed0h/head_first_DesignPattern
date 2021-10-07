
#include "WeatherData.h"
#include "../o/Observer.h"
using namespace std;

void WeatherData::getTemperature() {}

void WeatherData::getHumiduty() {}

void WeatherData::gePressure() {}

void WeatherData::measurementsChanged() { 
    notifyObservers(); }

void WeatherData::setMeasurements(float temperature, float humidity,
                                  float pressure) {
  this->_temperature = temperature;
  this->_humidity = humidity;
  this->_pressure = pressure;

  measurementsChanged();
}

void WeatherData::registerObserver(Observer *o) { _observers.push_back(o); }

void WeatherData::removeObserver(Observer *o) {
  std::vector<Observer*>::iterator it =
      std::find(_observers.begin(), _observers.end(), o);
 
  if (it != _observers.end()) {
    _observers.erase(it);
  }
}

void WeatherData::notifyObservers() {
  std::vector<Observer *>::iterator it = _observers.begin();
  for (; it != _observers.end(); ++it) {
    (*it)->update(_temperature, _humidity, _pressure);
  }
   
}
