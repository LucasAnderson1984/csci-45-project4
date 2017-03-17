#ifndef RELAY_H
#define RELAY_H

#include <iostream>
#include <wiringPi.h>

using namespace std;

class Relay {
  private:
    const int relayPin;

  public:
    Relay(const int);
    ~Relay(void);
    void on(void);
    void off(void);
};
#endif
