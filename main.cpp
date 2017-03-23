#include <errno.h>
#include <stdio.h>
#include <wiringPi.h>
#include "./header_files/relay.h"

int main(void) {

  if(wiringPiSetupGpio() < 0) {
    fprintf(stderr, "Unable to setup wiringPi: %s\n", strerror(errno));
    return 1;
  }

  return 0;
}
