#include "./../header_files/random_player.h"

RandomPlayer::RandomPlayer(void) { }

RandomPlayer::~RandomPlayer(void) { }

void RandomPlayer::play(int mp3) {
  switch(mp3) {
    case 1:
      //system("omxplayer /home/pi/csci-45-project3/mp3s/1.mp3");
      break;
    case 2:
      //system("omxplayer /home/pi/csci-45-project3/mp3s/2.mp3");
      break;
    case 3:
      //system("omxplayer /home/pi/csci-45-project3/mp3s/3.mp3");
      break;
  }
}
