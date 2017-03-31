#include <iostream>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wiringPi.h>
#include "./header_files/launcher.h"
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
  RandomPlayer random_player;
  random_player.start();

  ServoSensor* servo = new ServoSensor(22, 17, 27, 23, 24);
  Relay relays[4] = { Relay(21), Relay(20), Relay(16), Relay(12) };

  Launcher launcher(servo, relays);
  launcher.seek();

  return 0;
}
