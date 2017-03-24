#ifndef ULTRA_SONIC_H
#define ULTRA_SONIC_H

#include <cmath>
#include <stdio.h>
#include <sys/time.h>
#include <wiringPi.h>

class UltraSonic {
  private:
    const int trigPin;
    const int echoPin;
    float round(float, float nearest = 1);
  public:
    UltraSonic(const int, const int);
    ~UltraSonic(void);
    float disMeasure(void);
};
#endif
