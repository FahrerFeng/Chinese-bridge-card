#include "Player.h"
using namespace std;

Player::Player()
{

}

Player::~Player()
{
    //dtor
}

vector<Player*>& Player::init(){
    vector<Player*>* allPlayers = new vector<Player*>;
    for (int i = 0; i <= 4; i++) {
        allPlayers->push_back(new Player());
    }
    return *allPlayers;
}

void Player::setSuit(vector<Card*>& suit) {
    this->suit = suit;
}

vector<Card*>& Player::getSuit() {
   return suit;
}

void Player::sort() {
    std::sort(suit.begin(),suit.end(),Card::compareCard);
}
