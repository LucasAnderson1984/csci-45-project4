#include "./../header_files/servo.h"

ServoSensor::ServoSensor(const int pin):servoPin(pin) {
  softPwmCreate(pin, 0, 100);
}

ServoSensor::~ServoSensor(void) { }

int ServoSensor::searchLeft(void) {
  for (int i = 2; i <= 20; i++) {
    softPwmWrite(servoPin, i);

    delay(100);
  }

  return LOW;
}

int ServoSensor::searchRight(void) {
  for (int i = 20; i >= 4; i--) {
    softPwmWrite(servoPin, i);

    delay(100);
  }

  return LOW;
}

int ServoSensor::position(int pos) {
    softPwmWrite(servoPin, pos);
    delay(500);
    return pos;
}
