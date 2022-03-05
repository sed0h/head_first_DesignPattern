#pragma once
#include <string>
using std::string;

class Stereo {
 public:
  Stereo(string name);
  void on();
  void off();
  void setCD();
  void setVolume(int v);

 private:
  string _name;
  int _volume;
};
