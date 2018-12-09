#include "Dealer.h"
using namespace std;
Dealer::Dealer()
{
    //ctor
}

Dealer::~Dealer()
{
    //dtor
}

void Dealer::cardShuffle(vector<Card*>& poker) {
    random_shuffle(poker.begin(), poker.end());
}
void Dealer::deal(vector<Player*>& allPlayer, vector<Card*>& poker) {

    for(int i = 0; i < 4;i++) {
        vector<Card*>* suit = new vector<Card*>;
      for(int j = 0; j < 13; j++) {
            suit->push_back(poker[j + i * 13]);
        }
        allPlayer[i]->setSuit(*suit);
    }
}
