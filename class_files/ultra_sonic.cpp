#include "./../header_files/ultra_sonic.h"

UltraSonic::UltraSonic(const int echo, const int trig):ECHOPIN(echo), TRIGPIN(trig) {
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
}

UltraSonic::~UltraSonic() { }

float UltraSonic::calculate(void) {
  time1 = tv1.tv_sec * 1000000 + tv1.tv_usec;
  time2 = tv2.tv_sec * 1000000 + tv2.tv_usec;
  dis = (float)(time2 - time1) / 1000000 * 34000 / 2;

  return round(dis);
}

float UltraSonic::disMeasure(void) {
  int stuck = 0;

  echo();

  while(!(digitalRead(ECHOPIN) == 1))
    if ((stuck % 2500) == 0)
      echo();

  gettimeofday(&tv1, NULL);

  while(!(digitalRead(ECHOPIN) == 0));
  gettimeofday(&tv2, NULL);

  return calculate();
}

void UltraSonic::echo() {
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
}

float UltraSonic::round(float number, float nearest) {
  nearest = (int)pow(10, nearest);
  number = ((int)(number * nearest)) / nearest;

  return number;
}
