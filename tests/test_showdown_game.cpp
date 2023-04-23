#include <gtest/gtest.h>
#include <iostream>
#include <string>

#include "showdown_game.h"

TEST(TestShowdown, InitGame){
    ShowdownGame game;
    game.StartGame();
}