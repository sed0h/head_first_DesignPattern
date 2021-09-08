#pragma once
class Subject {
 public:
  Subject();
  virtual ~Subject();
  virtual void registerObserver();
  virtual void removeObserver();
  virtual void notifyObserver();
};
