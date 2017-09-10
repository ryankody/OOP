#include <iostream>
#include <iomanip>
#include <vector>
#include "card.hpp"

int main()
{
	// Create a deck of cards
	std::vector<Card> deck;
	for(int r = Ace; r <= King; ++r)
	{
		for(int s = Hearts; s <= Spades; ++s)
		{
			Card c{static_cast<Rank> (r), static_cast<Suit> (s)};
			deck.push_back(c);
		}
	}

	return 0;
}
