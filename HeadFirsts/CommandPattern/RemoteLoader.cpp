#include "RemoteControl.h"
#include "Light.h"
#include "CeilingFan.h"
#include "GarageDoor.h"
#include "Stereo.h"
#include "LightCommand.h"
#include "CeilingFanCommand.h"
#include "GarageDoorCommand.h"
#include "StereoCommand.h"
#include <iostream>
#include "TV.h"
#include "Hottub.h"

//#define TEST_ON_OFF
//#define TEST_UNDO
//#define TEST_CEILFAN
#define TEST_USE_MACROCMD

int main(int argc, char* argv[]) {
  RemoteControlWithUndo* remoteControl = new RemoteControlWithUndo();

#if defined(TEST_ON_OFF) || defined(TEST_UNDO)
  Light* livingRoomLight = new Light("Living Room");
  Light* kitchenLight    = new Light("Kitchen");
  CeilingFan* ceilingFan = new CeilingFan("Living Room");
  GarageDoor* garageDoor = new GarageDoor("");
  Stereo* stereo = new Stereo("Living Room");

  LightOnCommand *livingRoomLightOn = new LightOnCommand(livingRoomLight);
  LightOffCommand *livingRoomLightOff = new LightOffCommand(livingRoomLight);
  LightOnCommand *kitchenLightOn = new LightOnCommand(kitchenLight);
  LightOffCommand *kitchenLightOff = new LightOffCommand(kitchenLight);

  CeilingFanOnCommand *ceilingFanOn = new CeilingFanOnCommand(ceilingFan);
  CeilingFanOffCommand *ceilingFanOff = new CeilingFanOffCommand(ceilingFan);

  GarageDoorUpCommand* garageDoorUp = new GarageDoorUpCommand(garageDoor);
  GarageDoorDownCommand* garageDoorDown = new GarageDoorDownCommand(garageDoor);

  StereoOnWithCDCommand* stereoOnWithCD = new StereoOnWithCDCommand(stereo);
  StereoOffCommand* stereoOff = new StereoOffCommand(stereo);
#endif

#if defined(TEST_ON_OFF)
  remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
  remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
  remoteControl->setCommand(2, ceilingFanOn, ceilingFanOff);
  remoteControl->setCommand(3, stereoOnWithCD, stereoOff);

  std::cout << remoteControl->toString();

  remoteControl->onButtonWasPushed(0);
  remoteControl->offButtonWasPushed(0);
  remoteControl->onButtonWasPushed(1);
  remoteControl->offButtonWasPushed(1);
  remoteControl->onButtonWasPushed(2);
  remoteControl->offButtonWasPushed(2);
  remoteControl->onButtonWasPushed(3);
  remoteControl->offButtonWasPushed(3);
#endif

 #if defined(TEST_UNDO)
  remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
  
  remoteControl->onButtonWasPushed(0);
  remoteControl->offButtonWasPushed(0);
  std::cout << remoteControl->toString();
  remoteControl->undoButtonWasPushed();

  remoteControl->offButtonWasPushed(0);
  remoteControl->onButtonWasPushed(0);
  std::cout << remoteControl->toString();
  remoteControl->undoButtonWasPushed();
#endif

#if defined(TEST_CEILFAN)
  CeilingFan* ceilingFan = new CeilingFan("Living Room");
  CeilingFanMediumCommand* ceilingFanMedium =
      new CeilingFanMediumCommand(ceilingFan);
  CeilingFanHighCommand* ceilingFanHigh = new CeilingFanHighCommand(ceilingFan);
  CeilingFanOffCommand* ceilingFanOff = new CeilingFanOffCommand(ceilingFan);

  remoteControl->setCommand(0, ceilingFanMedium, ceilingFanOff);
  remoteControl->setCommand(1, ceilingFanHigh, ceilingFanOff);

  remoteControl->onButtonWasPushed(0);
  remoteControl->offButtonWasPushed(0);
  std::cout << remoteControl->toString();
  remoteControl->undoButtonWasPushed();

  remoteControl->onButtonWasPushed(1);
  std::cout << remoteControl->toString();
  remoteControl->undoButtonWasPushed();
#endif  // defined(TEST_CEILFAN)

#if defined(TEST_USE_MACROCMD)
  Light* light = new Light("Living Room");
  TV* tv = new TV("Living Room");
  Stereo* stereo = new Stereo("Living Room");
  Hottub* hottub = new Hottub();

  LightOnCommand* lightOn = new LightOnCommand(light);
  StereoOnWithCDCommand* stereoOn = new StereoOnWithCDCommand(stereo);
  TV
#endif  // defined(TEST_USE_MACROCMD)
}