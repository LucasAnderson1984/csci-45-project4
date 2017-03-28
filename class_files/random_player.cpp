#include "./../header_files/random_player.h"

RandomPlayer::RandomPlayer(void) { }

RandomPlayer::~RandomPlayer(void) { }

RandomPlayer::firing(const int mp3) {
  switch(mp3) {
    case 1:
      system("omxplayer /home/pi/csci-45-project4/mp3s/firing/1.wav");
      break;
    case 2:
      system("omxplayer /home/pi/csci-45-project4/mp3s/firing/2.mp3");
      break;
    case 3:
      system("omxplayer /home/pi/csci-45-project4/mp3s/firing/3.wav");
      break;
  }
}

void RandomPlayer::found(const int mp3) {
  switch(mp3) {
    case 1:
      system("omxplayer /home/pi/csci-45-project4/mp3s/found/4.wav");
      break;
    case 2:
      system("omxplayer /home/pi/csci-45-project4/mp3s/found/5.wav");
      break;
    case 3:
      system("omxplayer /home/pi/csci-45-project4/mp3s/found/6.wav");
      break;
  }
}

void RandomPlayer::searching(const int mp3) {
  switch (mp3) {
    case 1:
      system("omxplayer /home/pi/csci-45-project4/mp3s/searching/7.wav");
      break;
    case 2:
      system("omxplayer /home/pi/csci-45-project4/mp3s/searching/8.wav");
      break;
    case 3:
      system("omxplayer /home/pi/csci-45-project4/mp3s/searching/9.wav");
      break;
  }
}

void RandomPlayer::start(void) {
  system("omxplayer /home/pi/csci-45-project4/mp3s/start.mp3");
}
