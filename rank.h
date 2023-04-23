#pragma once

#include <string>
#include <unordered_map>

enum class RankEnum {
    k2,
    k3,
    k4,
    k5,
    k6,
    k7,
    k8,
    k9,
    k10,
    kJ,
    kQ,
    kK,
    kA
};

class Rank {
public:
    static std::unordered_map<RankEnum, std::string> rankStringMap;

    Rank(RankEnum);
    std::string toString() const;
    RankEnum value() const;
    void setRank(RankEnum rank);
    Rank& operator++();
    int showdownRank(Rank) const;
private:
    RankEnum rank;
};