#ifndef _PLAYER_CPP_
#define _PLAYER_CPP_

#include "Card.cpp"

class Player{
private:
    Card suit[13];  //持有牌
    int level;      //级别
    // Strategy strategy //策略
    // Memory memory    //记忆
    int sit;    //座次
    bool isAi;  //是否是AI
public:
    Card decision();    //出牌
    bool* show();   //卖牌
    void sorte();   //理牌
    void setters_and_getters();
};


#endif
