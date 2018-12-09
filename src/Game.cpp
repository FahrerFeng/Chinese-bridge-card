#include "Game.h"

Game::Game()
{
    dealer = new Dealer;
    rule = new Rule;
    record = new Record;
    poker = Card::init();
    players = Player::init();
}

Game::~Game()
{
    delete dealer;
    delete rule;
    delete record;
    delete status;
}
void Game::setStatus(GameStatus* status) {
    this->status = status;
}

