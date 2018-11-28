#ifndef _DEALER_CPP_
#define _DEALER_CPP_

#include "Player.cpp"
#include "Record.cpp"

class Dealer{
public:
    bool deal(Player* player,Card * card);   //发牌
    void shuffle(Card * card);   //洗牌
    void computeRound();    //计算当前轮得分
    void computeRoll(Record rec); //计算当前圈得分
};

#endif
