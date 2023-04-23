#pragma once

#include <string>

#include "rank.h"
#include "suit.h"

class Card {
public:
    Card(Suit, Rank);
    int showdownCard(Card) const;
    Suit getSuit() const;
    Rank getRank() const;
    std::string toString() const;
    bool operator<(const Card&) const;

private:
    Rank rank;
    Suit suit;
};