#pragma once

class QuackBehavior;
class FlyBehavior;

class Duck {
 private:
  

 public:
  QuackBehavior *quackBehavior;
  FlyBehavior *flyBehavior;

  Duck();
  virtual ~Duck();
  virtual void display();

  void performQuack();
  void swim();
  void performFly();

  void setFlyBehavior(FlyBehavior *fb);
  void setQuackBehavior(QuackBehavior *qb);
};
