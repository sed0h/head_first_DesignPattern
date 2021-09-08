#include "Duck.h"
#include "../q/QuackBehavior.h"
#include "../f/FlyBehavior.h"

Duck::Duck() {}

Duck::~Duck() {}

void Duck::performQuack() { quackBehavior->quack(); }

void Duck::swim() {}

void Duck::display() {}

void Duck::performFly() { flyBehavior->fly(); }

void Duck::setFlyBehavior(FlyBehavior *fb) { flyBehavior = fb; }

void Duck::setQuackBehavior(QuackBehavior *qb) { quackBehavior = qb; }