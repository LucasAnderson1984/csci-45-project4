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

    UltraSonic ultra1(23, 24);
    UltraSonic ultra2(17, 27);

    while(1) {
      cout << "UltraSonic 1: " << ultra1.disMeasure() << " cm" << endl;
      delay(750);

      cout << "UltraSonic 2: " << ultra2.disMeasure() << " cm" << endl;
      delay(750);
    }
  return 0;
}
