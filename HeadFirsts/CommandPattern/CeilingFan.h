#pragma once
#include <string>
using std::string;

enum SPEED {
	HIGH = 3,
	MEDIUM = 2,
	LOW = 1,
	OFF = 0,
};
typedef enum SPEED SPEED_t;
enum class FANSPEED {};

class CeilingFan {
 public:
  CeilingFan(string c_n);
  void on();
  void off();
  void high();
  void medium();
  void low();
  SPEED_t getSpeed();

  private:
  string _location;
  SPEED_t _speed;
};
