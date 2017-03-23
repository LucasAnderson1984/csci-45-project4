#include "./../header_files/servo_sensor.h"

ServoSensor::ServoSensor(const int pin):servoPin(pin) {
  softPwmCreate(pin, 0, 100);
}

ServoSensor::~ServoSensor(void) { }

int ServoSensor::searchLeft(void) {
  for (int i = 0; i <= 25; i++) {
    softPwmWrite(servoPin, i);

    delay(100);
  }

  return LOW;
}

int ServoSensor::searchRight(void) {
  for (int i = 25; i >= 0; i--) {
    softPwmWrite(servoPin, i);

    delay(100);
  }

  return LOW;
}

int ServoSensor::position(int pos) {
    softPwmWrite(servoPin, pos);

    return pos;
}
