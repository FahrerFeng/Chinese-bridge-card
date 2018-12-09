#ifndef DEALER_H
#define DEALER_H
#include "Card.h"
#include "Player.h"
#include <algorithm>
class Dealer {
public:
    Dealer();
    virtual ~Dealer();
    void deal(vector<Player*>& allPlayer, vector<Card*>& poker);
    void cardShuffle(vector<Card*>& poker);
};

#endif // DEALER_H
