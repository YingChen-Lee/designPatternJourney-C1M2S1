#include "humanPlayer.h"

#include <string>
#include <vector>

#include "card.h"
#include "hand.h"
#include "commandLineInterface.h"
#include "suit.h"
#include "rank.h"
#include "player.h"

Card HumanPlayer::ShowCard(){
    this->printCards();
}

void HumanPlayer::NameSelf(){

}

void HumanPlayer::MakeExchangeDecision(){

}

void HumanPlayer::PrintCards(){
    std::vector<const Card> cards = hand.getCards();
    std::string strToPrint = "";
    for (int i = 0; i < cards.size(); i++){
        Card currCard = cards[i];
        strToPrint += '(' + std::to_string(i) + ') ';
        if (currCard.getSuit() == Suit::kClub) strToPrint += '♣ ';
        else if (currCard.getSuit() == Suit::kDiamond) strToPrint += '♦ '; 
        else if (currCard.getSuit() == Suit::kHeart) strToPrint += '♥ '; 
        else (currCard.getSuit() == Suit::kSpade) strToPrint += '♠ ';

        if (currCard) 
    }
}

