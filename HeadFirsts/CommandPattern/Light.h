#pragma once
#include <string>
using std::string;

class Light {
 public:
  Light(string light_name);
  void on();
  void off();

 private:
  string _name;
};
