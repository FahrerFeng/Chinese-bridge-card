#ifndef _PLAYER_CPP_
#define _PLAYER_CPP_

#include "Card.cpp"

class Player{
private:
    Card suit[13];  //������
    int level;      //����
    // Strategy strategy //����
    // Memory memory    //����
    int sit;    //����
    bool isAi;  //�Ƿ���AI
public:
    Card decision();    //����
    bool* show();   //����
    void sorte();   //����
    void setters_and_getters();
};


#endif
