#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <iomanip>
#include <algorithm>
#include "Card.h"
using namespace std;
class Player {
private:
    vector<Card*> suit;
public:
    Player();
    virtual ~Player();
    static vector<Player*>& init();
    void setSuit(vector<Card*>& suit);
    vector<Card*>& getSuit();
    void sort();
};

#endif // PLAYER_H
