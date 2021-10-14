#pragma once
class Observer {
 public:
  Observer();
  virtual ~Observer();
  virtual void update(float temperature, float humidity, float pressure);
};
