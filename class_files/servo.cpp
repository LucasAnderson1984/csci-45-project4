#include "./../header_files/servo.h"

ServoSensor::ServoSensor(const int pin, const int ultraPin1, const int ultraPin2, const int ultraPin3, const int ultraPin4):SERVOPIN(pin) {
  softPwmCreate(pin, 0, 100);
  sonic1 = new UltraSonic(ultraPin1, ultraPin2);
  sonic2 = new UltraSonic(ultraPin3, ultraPin4);
}

ServoSensor::~ServoSensor(void) { }

int ServoSensor::searchLeft(void) {
  for (int i = START; i <= FINISH; i++) {
    softPwmWrite(SERVOPIN, i);

    float s1 = sonic1->disMeasure();
    float s2 = sonic2->disMeasure();

    cout << "Sonic 1: " << s1 << endl;
    cout << "Sonic 2: " << s2 << endl;

    if(sonic1->disMeasure() > 250 || sonic2->disMeasure() > 250)
	continue;
   
    if (abs(s1 - s2) <= 2)
      return HIGH;

    delay(200);
  }

  return LOW;
}

int ServoSensor::searchRight(void) {
  for (int i = FINISH; i >= START; i--) {
    softPwmWrite(SERVOPIN, i);

    float s1 = sonic1->disMeasure();
    float s2 = sonic2->disMeasure();

    cout << "Sonic 1: " << s1 << endl;
    cout << "Sonic 2: " << s2 << endl;

    if (abs(s1 - s2) <= 2)
      return HIGH;

    delay(200);
  }

  return LOW;
}

int ServoSensor::position(int pos) {
    softPwmWrite(SERVOPIN, pos);
    delay(500);

    return pos;
}
