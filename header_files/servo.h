#ifndef SERVO_SENSOR_H
#define SERVO_SENSOR_H

#include <wiringPi.h>
#include <softPwm.h>

class ServoSensor {
  private:
    const int servoPin;

  public:
    ServoSensor(const int);
    ~ServoSensor(void);
    int searchLeft(void);
    int searchRight(void);
    int position(int);
};
#endif
