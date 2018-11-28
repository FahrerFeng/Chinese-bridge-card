#ifndef _TABLE_CPP_
#define _TABLE_CPP_
#include "Record.cpp"
#include "Player.cpp"

class Table{
public:
    void displayShowSituation(Record record);   //��ʾ�������
    void displayGottenSituation(Record record); //չʾ�������
    void displayRoundSituation(Record record);  //չʾ��ǰ�ֳ������
    void displayCurPlayer(Record record);       //չʾ��ǰ������
    void displayPlayerInfo(Player player);      //չʾѡ����Ϣ
    void displayRankList(Record record);        //չʾ��ǰȦѡ�ֵ÷��ŷ�
    void displayCard(Player player);            //չʾ����

};

#endif // TABLE_H_INCLUDED

