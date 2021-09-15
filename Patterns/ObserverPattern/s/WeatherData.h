#pragma once
#include <vector>

#include "Subject.h"

class Observer;

class WeatherData : public Subject {
 public:
  virtual void registerObserver(Observer *o) ;
  virtual void removeObserver(Observer *o) ;
  virtual void notifyObserver() ;
  void getTemperature();
  void getHumiduty();
  void gePressure();
  void measurementsChanged();
  void setMeasurements(float temperature, float humidity, float pressure);

 private:
  std::vector<Observer*> _observers;
  float _temperature;
  float _humidity;
  float _pressure;

};
