#ifndef _DEALER_CPP_
#define _DEALER_CPP_

#include "Player.cpp"
#include "Record.cpp"

class Dealer{
public:
    bool deal(Player* player,Card * card);   //����
    void shuffle(Card * card);   //ϴ��
    void computeRound();    //���㵱ǰ�ֵ÷�
    void computeRoll(Record rec); //���㵱ǰȦ�÷�
};

#endif
