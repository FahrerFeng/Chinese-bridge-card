#ifndef _TABLE_CPP_
#define _TABLE_CPP_
#include "Record.cpp"
#include "Player.cpp"

class Table{
public:
    void displayShowSituation(Record record);   //显示卖牌情况
    void displayGottenSituation(Record record); //展示吃牌情况
    void displayRoundSituation(Record record);  //展示当前轮出牌情况
    void displayCurPlayer(Record record);       //展示当前出牌人
    void displayPlayerInfo(Player player);      //展示选手信息
    void displayRankList(Record record);        //展示当前圈选手得分排分
    void displayCard(Player player);            //展示手牌

};

#endif // TABLE_H_INCLUDED

