#ifndef _RECORD_CPP_
#define _RECORD_CPP_

#include "Card.cpp"

class Record{
public:
    int gameCount;      //��ǰ��Ϸ����
    static Card history[100][13][4];   //history;
    Card gottenCards[16][4];    //��ǰȦ��ֹ����һ�֣�ÿ��ѡ�ֳԵ���
    int show;     //�������
    Color color;     //��ǰ������ɫ
    int curPlayer;      //��ǰ�ֵ��ĸ�ѡ�ֳ���
    int getFirstAttacker();     //ȷ����һȦ����ѡ���±꣬����ǵ�һȦ������-1
    bool addRound();    //����ǰ�ּ�¼��history
    void getters();
    void setters();
};

#endif
