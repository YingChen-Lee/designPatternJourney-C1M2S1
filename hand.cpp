#include "hand.h"

#include <algorithm>
#include <vector>

#include "card.h"
#include "suit.h"
#include "rank.h"

Hand::Hand() {
    sorted_ = false;
}

void Hand::AddCard(const Card& card){
    cards_.push_back(card);
    sorted_ = false;
}

const std::vector<Card>& Hand::get_cards() {
    if (sorted_ == false) {
        std::sort(cards_.begin(), cards_.end());
        sorted_ = true;
    }
    return cards_;
}

void Hand::RemoveCard(SuitEnum targetSuit, RankEnum targetRank){
    for (auto it = cards_.begin(); it != cards_.end(); ++it){
        if (it->getSuit().value() == targetSuit && it->getRank().value() == targetRank){
            cards_.erase(it);
            return;
        }
    } 
}

int Hand::get_size() const{
    return cards_.size();
}
