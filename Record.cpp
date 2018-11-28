#ifndef _RECORD_CPP_
#define _RECORD_CPP_

#include "Card.cpp"

class Record{
public:
    int gameCount;      //当前游戏局数
    static Card history[100][13][4];   //history;
    Card gottenCards[16][4];    //当前圈截止到上一轮，每个选手吃的牌
    int show;     //卖牌情况
    Color color;     //当前轮主花色
    int curPlayer;      //当前轮到哪个选手出牌
    int getFirstAttacker();     //确定上一圈得猪选手下标，如果是第一圈，返回-1
    bool addRound();    //将当前轮记录进history
    void getters();
    void setters();
};

#endif
