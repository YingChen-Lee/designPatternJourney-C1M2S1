#pragma once

#include <vector>

#include "card.h"

class Deck {
public:
    Deck();
    void Shuffle();
    Card DrawOneCard();
    int size();

private:
    std::vector<Card> cards_;
};