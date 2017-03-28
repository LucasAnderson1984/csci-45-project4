#include "./../header_files/launcher.h"

Launcher::Launcher(ServoSensor* s, Relay* r) {
  servo = s;
  relays = r;
  srand(time(0));
  random_player = new RandomPlayer();

  off();
}

Launcher::~Launcher(void) { }

void Launcher::destroy(void) {
  random_player->found(random());
  launch();
  delay(500);

  off();
  random_player->firing(random());

  wind();
  delay(210 / 2);

  off();
}

void Launcher::launch(void) {
  relays[0].off();
  relays[1].on();
  relays[2].off();
  relays[3].on();
}

void Launcher::off(void) {
  relays[0].off();
  relays[1].off();
  relays[2].off();
  relays[3].off();
}

void Launcher::seek(void) {
  while(1) {
    random_player->searching(random());
    if (servo->searchLeft())
      destroy();

    random_player->searching(random());

    if (servo->searchRight())
      destroy();
  }
}
int Launcher::random(void) {
  return rand() % 3 + 1;
}

void Launcher::wind(void) {
  relays[0].on();
  relays[1].off();
  relays[2].on();
  relays[3].off();
}
