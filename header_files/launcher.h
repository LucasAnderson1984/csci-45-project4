#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <ctime>
#include <stdlib.h>
#include "random_player.h"
#include "relay.h"
#include "servo.h"

using namespace std;

class Launcher {
  private:
    void destroy(void);
    void off(void);
    void launch(void);
    int random(void);
    RandomPlayer* random_player;
    Relay* relays;
    ServoSensor* servo;
    void wind(void);

  public:
    Launcher(ServoSensor*, Relay*);
    ~Launcher(void);
    void seek(void);
};
#endif
