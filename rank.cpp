#include "rank.h"

#include <string>
#include <iostream>

std::unordered_map<RankEnum, std::string> Rank::rankStringMap = {
    {RankEnum::k2, "2"}, {RankEnum::k3, "3"}, {RankEnum::k4, "4"}, {RankEnum::k5, "5"},
    {RankEnum::k6, "6"}, {RankEnum::k7, "7"}, {RankEnum::k8, "8"}, {RankEnum::k9, "9"},
    {RankEnum::k10, "10"}, {RankEnum::kJ, "J"}, {RankEnum::kQ, "Q"}, {RankEnum::kK, "K"},
    {RankEnum::kA, "A"}
};

Rank::Rank(RankEnum rank): rank(rank) {};

std::string Rank::toString() const{
    return Rank::rankStringMap[this->rank];
}

RankEnum Rank::value() const{
    return this->rank;
}

void Rank::setRank(RankEnum rank) {
    this->rank = rank; 
} 

Rank& Rank::operator++(){
    if (this->value() == RankEnum::kA) {
        throw std::out_of_range("for operator++ Rank");
    }
    this->setRank(RankEnum(static_cast<int>(this->value()) + 1));
    return *this;
}

int Rank::showdownRank(Rank rhs) const{
    return static_cast<int>(this->value()) - static_cast<int>(rhs.value());
}