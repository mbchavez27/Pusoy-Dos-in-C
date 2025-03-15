#define HANDSIZE 13
#define DECKSIZE 52

typedef enum {
  THREE = 3,
  FOUR,
  FIVE,
  SIX,
  SEVEN,
  EIGHT,
  NINE,
  TEN,
  JACK,
  QUEEN,
  KING,
  ACE,
  TWO
} RANK;

typedef enum { DIAMONDS, HEARTS, CLUBS, SPADES } SUIT;

typedef struct {
  RANK rank;
  SUIT suit;
} CARD;
