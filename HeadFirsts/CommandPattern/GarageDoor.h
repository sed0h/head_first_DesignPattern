#pragma once
#include <string>
using std::string;

class GarageDoor {
 public:
  GarageDoor(string g_d);
  void up();
  void down();

  private:
  string _location;
};
