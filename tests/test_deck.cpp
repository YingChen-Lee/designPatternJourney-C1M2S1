#include <gtest/gtest.h>
#include <iostream>
#include <string>

#include "card.h"
#include "deck.h"
#include "suit.h"
#include "rank.h"

TEST(TestDeck, DeckSize){
    Deck testDeck;
    GTEST_ASSERT_EQ((int)(4 * 13), testDeck.size());
}

TEST(TestDeck, DeckShuffleAndDraw) {
    Deck testDeck;
    Card topCard = testDeck.DrawOneCard();
    GTEST_ASSERT_EQ("♠A", topCard.toString());
    GTEST_ASSERT_EQ(4 * 13 - 1, testDeck.size());

    topCard = testDeck.DrawOneCard();
    GTEST_ASSERT_EQ("♠K", topCard.toString());

    testDeck.Shuffle();
    topCard = testDeck.DrawOneCard();
    GTEST_ASSERT_NE("♠Q", topCard.toString());
}
/*
♥
♦
♣
♠
*/