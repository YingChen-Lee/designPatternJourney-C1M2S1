#pragma once

#include "card.h"
#include "hand.h"
#include "showdown_game.h"

#include <string>

class Player {
public:
    //void TakeTurn(ShowdownGame);
    //virtual Card ShowCard() = 0;
    //virtual void NameSelf() = 0;
    void AddCardToHandCard(Card);
    //void GainPoint();
    //std::string getName();
    //int getPoint();
    
    int GetHandSize();

protected:
    //virtual void makeExchangeDecision() = 0;

private:
    std::string name_;
    int point_;
    Hand hand_;
};