#pragma once

class Observer;

class Subject {
 public:
  Subject();
  virtual ~Subject();
  virtual void registerObserver(Observer *o)=0;
  virtual void removeObserver(Observer *o)=0;
  virtual void notifyObservers()=0;
};
