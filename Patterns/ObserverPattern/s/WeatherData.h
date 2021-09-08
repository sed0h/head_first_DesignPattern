#pragma once
#include "Subject.h"
class WeatherData : public Subject {
public:
	void getTemperature();
	void getHumiduty();
    void gePressure();
    void measurementsChanged();

};
