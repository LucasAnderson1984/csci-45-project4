#include <iostream>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wiringPi.h>
#include "./header_files/random_player.h"
#include "./header_files/relay.h"
#include "./header_files/servo.h"
#include "./header_files/ultra_sonic.h"

using namespace std;

int main(void) {

  if(wiringPiSetupGpio() < 0) {
    fprintf(stderr, "Unable to setup wiringPi: %s\n", strerror(errno));
    return 1;
  }

  ServoSensor servo(22, 17, 27, 23, 24);

  while(1) {
    cout << servo.searchLeft() << endl;

    delay(1000);

    servo.searchRight();

    delay(1000);
  }

/*
    Relay relay1(21);
    Relay relay2(20);
    Relay relay3(16);
    Relay relay4(12);

    relay1.off();
    relay2.off();
    relay3.off();
    relay4.off();

    delay(2000);

    cout << "Moving Forward" << endl;

    relay1.on();
    relay2.off();
    relay3.on();
    relay4.off();

    delay(210 / 2);

    cout << "Back off" << endl;

    relay1.off();
    relay2.off();
    relay3.off();
    relay4.off();

    delay(500);

    cout << "Moving Forward" << endl;

    relay1.on();
    relay2.off();
    relay3.on();
    relay4.off();

    delay(210 / 2);

    cout << "Back off" << endl;

    relay1.off();
    relay2.off();
    relay3.off();
    relay4.off();

    delay(5000);

    cout << "Moving Backward" << endl;

    relay1.off();
    relay2.on();
    relay3.off();
    relay4.on();

    delay(500);

    relay1.off();
    relay2.off();
    relay3.off();
    relay4.off();
*/

  return 0;
}
