#include "deck.h"

#include <algorithm>
#include <random>
#include <vector>
#include <iostream>

#include "card.h"
#include "rank.h"
#include "suit.h"

Deck::Deck(){
    for (int s = static_cast<int>(SuitEnum::kClub); s <= static_cast<int>(SuitEnum::kSpade); s++) {
        for (int r = static_cast<int>(RankEnum::k2); r <= static_cast<int>(RankEnum::kA); r++) {
            cards_.push_back(Card(Suit(SuitEnum(s)), Rank(RankEnum(r))));
        }
    }
}

Card Deck::DrawOneCard(){
    Card topCard = cards_.back();
    cards_.pop_back();
    return topCard;
}

void Deck::Shuffle(){
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(cards_), std::end(cards_), rng);
}

int Deck::size(){
    return this->cards_.size();
}