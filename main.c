#include "headers.h"
#include <stdio.h>

int main() {
  CARD deck[DECKSIZE] = {0};

  for (int i = 0; i < DECKSIZE; i++) {
    printf("%d %d\n", deck[i].rank, deck[i].suit);
  }

  return 0;
}
