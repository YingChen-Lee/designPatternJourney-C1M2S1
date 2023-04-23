#pragma once

#include "card.h"
#include "player.h"

class HumanPlayer : public Player {
public:
    Card ShowCard() override;
    void NameSelf() override;

private:
    void MakeExchangeDecision() override;
    void PrintCards();
}