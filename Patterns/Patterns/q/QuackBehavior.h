#pragma once
class QuackBehavior {
 public:
	QuackBehavior();
	virtual ~QuackBehavior(); //��������Ӧ������Ϊ�麯��
	virtual void quack()=0;	  //�÷������������������¶��壬�������麯��

};
