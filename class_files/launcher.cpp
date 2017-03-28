#include "./../header_files/launcher.h"

Launcher::Launcher(ServoSensor servo*, Relay* relays) {
  self.servo = servo;
  self.relays = relays;
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
  relay1.off();
  relay2.on();
  relay3.off();
  relay4.on();
}

void Launcher::off(void) {
  relays[0]->off();
  relays[1]->off();
  relays[2]->off();
  relays[3]->off();
}

void Launcher::play(const int mp3) {
  random_player->play(mp3);
}

void Launcher::seek(int) {
  while(1) {
    random_player.searching(random());
    if (servo.searchLeft())
      destroy();

    random_player.searching(random());

    if (servo.searchRight())
      destroy();
  }
}
int Launcher::random(void) {
  return rand() % 3 + 1;
}

void Launcher::wind(void) {
  relay1.on();
  relay2.off();
  relay3.on();
  relay4.off();
}
