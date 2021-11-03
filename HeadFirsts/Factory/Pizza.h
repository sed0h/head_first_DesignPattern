#pragma once
#include <iostream>
#include <vector>

class Pizza {
 public:
  Pizza(std::string pizza_name);

  Pizza();

  void prepare();
  void bake();
  void cut();
  void box();
  std::string getName();

 private:
  std::string _name;
  std::string _dough;
  std::string _sauce;
  std::vector<std::string> _toppings;
};
