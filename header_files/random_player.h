#ifndef RANDOM_PLAYER_H
#define RANDOM_PLAYER_H

#include <stdlib.h>

class RandomPlayer {
  public:
    RandomPlayer(void);
    ~RandomPlayer(void);
    void firing(const int);
    void found(const int);
    void searching(const int);
    void start(void);
};
#endif
