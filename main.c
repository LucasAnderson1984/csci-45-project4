#include <stdio.h>
#include <errno.h>
#include <wiringPi.h>

#define PinOne 17
#define PinTwo 27
#define PinThree 22

int main(void) {

  if(wiringPiSetupGpio() < 0) {
    fprintf(stderr, "Unable to setup wiringPi: %s\n", strerror(errno));
    return 1;
  }

  return 0;
}
