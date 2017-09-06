#include <utility>

// Ranks:
// 2-10, jack, queen, king, ace

// Suits:
// hearts, diamonds, clubs, spades

// Not the best. int is too big for the number of cards that are needed.
// the chance that it is a card that does not exist is massive.
// using Card = int[2];
// using Card = std::pair<int, int>;

enum Rank // An enumeration type
{
	Ace, // An enumerator
	Two,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	Ten,
	Jack,
	Queen,
	King,
};

enum Suit
{
	Hearts,
	Diamonds,
	Clubs,
	Spades,
};

struct Card
{
	const Rank rank;
	const Suit suit;
};

