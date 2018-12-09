#include <iostream>
#include "Card.h"
#include "Dealer.h"
#include "Player.h"
#include <stdio.h>
using namespace std;

int main()
{
    Dealer* dealer = new Dealer();
    vector<Card*> poker;
    poker = Card::init();
    vector<Player*> playerArr;
    playerArr = Player::init();
    for(int i = 0; i < 52 ;i++) {
        cout<<poker[i]->color->getFace();
        cout<<poker[i]->face<<"   ";
        if ((i+1) % 13 == 0){
            cout<<endl;
        }
    }
    cout<<endl;
    dealer->cardShuffle(poker);
    for(int i = 0; i < 52 ;i++) {
        cout<<poker[i]->color->getFace();
        cout<<poker[i]->face<<"   ";
        if ((i+1) % 13 == 0){
            cout<<endl;
        }
    }
    dealer->deal(playerArr,poker);
    cout<<endl;
    for (int i = 0; i < 4;i++) {
        for(vector <Card*>::iterator iter = playerArr[i]->getSuit().begin(); iter != playerArr[i]->getSuit().end(); ++iter) {
            cout<<(*iter)->color->getFace();
            cout<<(*iter)->face<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i < 4; i++) {
        playerArr[i]->sort();
    }
    for (int i = 0; i < 4;i++) {
        for(vector <Card*>::iterator iter = playerArr[i]->getSuit().begin(); iter != playerArr[i]->getSuit().end(); ++iter) {
            cout<<(*iter)->color->getFace();
            cout<<(*iter)->face<<"   ";
        }
        cout<<endl;
    }
    system("pause");
}
