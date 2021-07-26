#include "d/MallardDuck.h"
#include "d/ModelDuck.h"
#include "f/FlyRocketPowered.h"

int main() {
  Duck *mallard = new MallardDuck();
  mallard->performFly();
  mallard->performQuack();	

  Duck *model = new ModelDuck();
  model->performFly();
  model->setFlyBehavior(new FlyRocketPowered());
  model->performFly();
}