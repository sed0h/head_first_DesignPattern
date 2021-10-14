#include "o/CurrentConditionsDisplay.h"
#include "o/StatisticsDisplay.h"
#include "s/WeatherData.h"

int main() {
  WeatherData *weatherData = new WeatherData();
  CurrentConditionsDisplay *currentDisplay =
      new CurrentConditionsDisplay(weatherData);

  StatisticsDisplay *statisticsDisplay = new StatisticsDisplay(weatherData);

  weatherData->setMeasurements(80, 65, 30.4f);
  return 0;
}