#ifndef SERVO_SENSOR_H
#define SERVO_SENSOR_H

#include <wiringPi.h>
#include <stdio.h>
#include <sys/time.h>

class UltraSonic {
  private:
    const int trigPin;
    const int echoPin;
  public:
    UltraSonic(const int, const int);
    ~UltraSonic(void);
    disMeasure(void);
};
#endif
