#pragma once
#include <string>
using std::string;

class TV {
 public:
  TV(string location);
  void on();
  void off();

  private:
  string _location;
};
