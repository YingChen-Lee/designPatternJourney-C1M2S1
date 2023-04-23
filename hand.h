#pragma once

#include <vector>

#include "card.h"
#include "rank.h"
#include "suit.h"

class Hand {
public:
    void AddCard(const Card&);
    const std::vector<Card>& get_cards();
    void RemoveCard(SuitEnum, RankEnum);
    int get_size() const;
private:
    std::vector<Card> cards_; 
    bool sorted_;
};
