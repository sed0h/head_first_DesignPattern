#pragma once
#include <string>
using std::string;

class Hottub {
 public:
  Hottub();
  void on();
  void off();

  private:
  string _location;
};
