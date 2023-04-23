#include "suit.h"

#include <string>
#include <iostream>

std::unordered_map<SuitEnum, std::string> Suit::suitStringMap = {
    {SuitEnum::kClub, "♣"}, {SuitEnum::kDiamond, "♦"}, {SuitEnum::kHeart, "♥"}, {SuitEnum::kSpade, "♠"}
};

Suit::Suit(SuitEnum suit): suit(suit) {};

std::string Suit::toString() const{
    return Suit::suitStringMap[this->suit];
}

SuitEnum Suit::value() const{
    return this->suit;
}

void Suit::setSuit(SuitEnum suit) {
    this->suit = suit; 
} 

Suit& Suit::operator++(){
    if (this->value() == SuitEnum::kSpade) {
        throw std::out_of_range("for operator ++ Suit");
    }
    this->setSuit(SuitEnum(static_cast<int>(this->value()) + 1));
    return *this;
}

int Suit::showdownSuit(Suit rhs) const{
    return static_cast<int>(this->value()) - static_cast<int>(rhs.value());
}

/*
char *hearts  = "\x03";  //♥
char *diamond = "\x04";  //♦
char *clubs   = "\x05";  //♣
char *spades  = "\x06";  //♠
*/