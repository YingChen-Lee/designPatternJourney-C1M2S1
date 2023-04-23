#pragma once

#include <memory>
#include <optional>
#include <string>
#include <vector>

#include "deck.h" 
#include "player.h"

class ShowdownGame {
public:
    ShowdownGame();
    void StartGame();

private:
    Deck deck_;
    std::vector<std::unique_ptr<Player>> players_;
    std::optional<std::weak_ptr<Player>> winner_;
    
    void InitPlayers();
    void DealCardsToPlayers();
};