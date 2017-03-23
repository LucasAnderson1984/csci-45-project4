#include <iostream>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wiringPi.h>
#include "./header_files/relay.h"
#include "./header_files/servo.h"
#include "./header_files/ultra_sonic.h"

using namespace std;

int main(void) {

  if(wiringPiSetupGpio() < 0) {
    fprintf(stderr, "Unable to setup wiringPi: %s\n", strerror(errno));
    return 1;
  }

//  ServoSensor servo(17);
//  servo.searchLeft();
//  delay(50);
//  servo.searchRight();
//  delay(500);
//  servo.position(11);

    UltraSonic ultra(23,24);

    while(1) {
      cout << ultra.disMeasure() << endl;
      delay(300);
    }
  return 0;
}
