#pragma once
class QuackBehavior {
 public:
	QuackBehavior();
	virtual ~QuackBehavior(); //析构函数应当声明为虚函数
	virtual void quack()=0;	  //该方法会在派生类中重新定义，所以是虚函数

};
