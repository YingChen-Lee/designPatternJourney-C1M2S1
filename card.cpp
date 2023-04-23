#include "card.h"

#include <unordered_map>
#include <string>

#include "suit.h"
#include "rank.h"

Card::Card(Suit suit, Rank rank): suit(suit), rank(rank){};

int Card::showdownCard(Card rhsCard) const {
    int suitShowdown = this->getSuit().showdownSuit(rhsCard.getSuit());
    int rankShowdown = this->getRank().showdownRank(rhsCard.getRank());
    return 4 * rankShowdown + suitShowdown;
}

Suit Card::getSuit() const {
    return this->suit;
}

Rank Card::getRank() const {
    return this->rank;
}

std::string Card::toString() const {
    std::string str = "";
    str += this->suit.toString() + this->rank.toString();
    return str;
} 

bool Card::operator<(const Card& rhs) const{
    return (this->showdownCard(rhs) < 0);
}