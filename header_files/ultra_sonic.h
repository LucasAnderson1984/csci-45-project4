#ifndef ULTRA_SONIC_H
#define ULTRA_SONIC_H

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
    float disMeasure(void);
};
#endif
