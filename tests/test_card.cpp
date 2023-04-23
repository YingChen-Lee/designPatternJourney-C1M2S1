#include <gtest/gtest.h>
#include <iostream>
#include <string>

#include "suit.h"
#include "rank.h"
#include "card.h"

TEST(TestSuit, CanGetSuit) {
    Suit testSuit(SuitEnum::kClub);

    GTEST_ASSERT_EQ(SuitEnum::kClub, testSuit.value());
}

TEST(TestSuit, Increment) {
    Suit testSuit(SuitEnum::kHeart);
    ++testSuit;
    GTEST_ASSERT_EQ(SuitEnum::kSpade, testSuit.value());
    EXPECT_THROW(++testSuit, std::out_of_range);
}

TEST(TestSuit, ToString) {
    Suit testSuit(SuitEnum::kHeart);
    GTEST_ASSERT_EQ("♥", testSuit.toString());
}

TEST(TestSuit, ShowdownSuit) {
    Suit lhs(SuitEnum::kClub);
    Suit rhs(SuitEnum::kSpade);
    GTEST_ASSERT_EQ(-3, lhs.showdownSuit(rhs));
}

TEST(TestCard, CanGetCard) {
    Card testCard(Suit(SuitEnum::kClub), Rank(RankEnum::k3));
    GTEST_ASSERT_EQ("♣3", testCard.toString());
}

TEST(TestCard, ShowdownCard) {
    Card lhs(Suit(SuitEnum::kClub), Rank(RankEnum::k4));
    Card rhs(Suit(SuitEnum::kSpade), Rank(RankEnum::k3));
    GTEST_ASSERT_EQ((4 * 1 - 3), lhs.showdownCard(rhs));
}

TEST(TestCard, SmallerOperator) {
    Card lhs(Suit(SuitEnum::kClub), Rank(RankEnum::k4));
    Card rhs(Suit(SuitEnum::kSpade), Rank(RankEnum::k3));
    GTEST_ASSERT_EQ(false, lhs < rhs);
}