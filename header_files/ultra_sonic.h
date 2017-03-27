#ifndef ULTRA_SONIC_H
#define ULTRA_SONIC_H

#include <cmath>
#include <iostream>
#include <stdio.h>
#include <sys/time.h>
#include <wiringPi.h>

using namespace std;

class UltraSonic {
  private:
    float dis;
    const int ECHOPIN;
    long time1, time2;
    const int TRIGPIN;
    struct timeval tv1;
    struct timeval tv2;
    float calculate(void);
    void echo(void);
    float round(float, float nearest = 1);

  public:
    UltraSonic(const int, const int);
    ~UltraSonic(void);
    float disMeasure(void);
};
#endif
