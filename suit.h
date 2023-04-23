#pragma once

#include <string>
#include <unordered_map>

enum class SuitEnum {
    kClub,
    kDiamond,
    kHeart,
    kSpade
};

class Suit {
public:
    static std::unordered_map<SuitEnum, std::string> suitStringMap;

    Suit(SuitEnum);
    std::string toString() const;
    SuitEnum value() const;
    void setSuit(SuitEnum suit);
    Suit& operator++();
    int showdownSuit(Suit) const;
private:
    SuitEnum suit;
};
