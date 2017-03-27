#ifndef SERVO_SENSOR_H
#define SERVO_SENSOR_H

#include <iostream>
#include <softPwm.h>
#include "ultra_sonic.h"
#include <wiringPi.h>

using namespace std;

class ServoSensor {
  private:
    const int servoPin;
    UltraSonic* sonic1;
    UltraSonic* sonic2;

  public:
    ServoSensor(const int, const int, const int, const int, const int);
    ~ServoSensor(void);
    int searchLeft(void);
    int searchRight(void);
    int position(int);
};
#endif
