#include "./../header_files/ultra_sonic.h"

UltraSonic::UltraSonic(const int echo, const int trig):echoPin(echo), trigPin(trig) {
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
}

UltraSonic::~UltraSonic() { }

float UltraSonic::disMeasure(void) {
  struct timeval tv1;
  struct timeval tv2;
  long time1, time2;
  float dis;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  while(!(digitalRead(echoPin) == 1));
    gettimeofday(&tv1, NULL);

  while(!(digitalRead(echoPin) == 0));
    gettimeofday(&tv2, NULL);

  time1 = tv1.tv_sec * 1000000 + tv1.tv_usec;
  time2 = tv2.tv_sec * 1000000 + tv2.tv_usec;
  dis = (float)(time2 - time1) / 1000000 * 34000 / 2;
  dis *= 10;
  dis = (int)dis;
  dis = (float)(dis / 10);

  return dis;
}
