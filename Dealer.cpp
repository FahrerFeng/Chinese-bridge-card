#ifndef _DEALER_CPP_
#define _DEALER_CPP_
#include <vector>
#include <list>
#include <algorithm>
#include "Player.cpp"
#include "Record.cpp"

class Dealer{
public:
    bool deal(Player* player,Card * card);   //发牌
    
    //洗牌
    //random_shuffle不能直接用于list，因此必须借助vector实现目的
    void CardShuffle(list <Card*> * Cardbox) {
        //建立辅助vector
        vector <Card*> * Cardbox_Buffer = new vector <Card*>;
        //将list元素全部赋给vector
        for (list<Card*>::iterator it = Cardbox -> begin(); it != Cardbox -> end(); ++it) {
                Cardbox_Buffer -> push_back(*it);
        }
        //清空Cardbox
        Cardbox -> clear();
        //将辅助vector乱序
        random_shuffle(Cardbox_Buffer->begin(), Cardbox_Buffer->end());
        //将辅助vector所有值赋给Cardbox
        for (vector<Card*>::iterator it = Cardbox_Buffer -> begin(); it != Cardbox_Buffer -> end(); ++it) {
            Cardbox -> push_back(*it);
        }
        //清空并删除辅助vector
        Cardbox_Buffer -> clear();
        delete Cardbox_Buffer;
    };

    void computeRound();    //计算当前轮得分
    void computeRoll(Record rec); //计算当前圈得分
};

#endif
