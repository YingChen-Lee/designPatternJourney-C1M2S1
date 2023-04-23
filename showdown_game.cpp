#include <iostream>

#include "showdown_game.h"

#include "player.h"

ShowdownGame::ShowdownGame() {
    InitPlayers();
}

void ShowdownGame::StartGame() {
    //for (auto& player: players_)
    //    player->NameSelf();
    
    deck_.Shuffle();

    DealCardsToPlayers();
    
    // Start playing game
    //for (int i = 0; i < 13; i++) {
    //    for (auto& player: players_)
    //        player->TakeTurn(this);
    //}
    
    //DecideWinner();
    //PrintWinner();
}

void ShowdownGame::InitPlayers() {
    players_.push_back(std::move(std::make_unique<Player>()));
    players_.push_back(std::move(std::make_unique<Player>()));
    players_.push_back(std::move(std::make_unique<Player>()));
    players_.push_back(std::move(std::make_unique<Player>()));
}

void ShowdownGame::DealCardsToPlayers() {
    while (deck_.size() > 0) {
        for (auto& player: players_) {
            if (deck_.size() <= 0)
                break;
            player->AddCardToHandCard(deck_.DrawOneCard()); 
        }
    }
    for (auto& player: players_)
        std::cout << player->GetHandSize();
}
