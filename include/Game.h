#ifndef GAME_H
#define GAME_H
#include <vector>
#include <iomanip>
#include "Card.h"
#include "Dealer.h"
#include "Rule.h"
#include "Player.h"
#include "Record.h"
#include "GameStatus.h"
using namespace std;

class Game
{
private:
    Dealer* dealer;
    Rule* rule;
    vector<Card*> poker;
    vector<Player*> players;
    Record* record;
    GameStatus* status;
public:
    Game();
    virtual ~Game();
    void setStatus(GameStatus* status);
};

#endif // GAME_H
