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
	Ace = 1, // An enumerator
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

class Card
{
public:
	// Default constructor
	Card() {}

	// constructor for a card
	Card(Rank r, Suit s)
		: rank(r), suit(s) // member initializer list
	{
	}

	//getter functions
	Rank get_rank()
	{
		return rank;
	}
	Suit get_suit()
	{
		return suit;
	}

	//setter functions
	Rank set_rank(Card c, Rank r)
	{
		c.rank = r;
	}
	Rank set_suit(Card c, Suit s)
	{
		c.suit = s;
	}

	private:
		Rank rank;
		Suit suit;
};

