#include "player.h"

#include "card.h"

void Player::AddCardToHandCard(Card card) {
    hand_.AddCard(card);
}

int Player::GetHandSize() {
    return hand_.get_size();
}