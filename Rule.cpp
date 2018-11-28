#ifndef _RULE_CPP_
#define _RULE_CPP_

#include "Card.cpp"

class Rule{
private:
    Card firstCard;     //��һȦ��һ�ֵ�һ��
    bool canShow;       //�Ƿ���������
    bool canSurvive;    //�Ƿ������������������ͷ��true���ֿɳ�false���ֲ����Գ�
    bool isTeam;        //�Ƿ��Լ�
    bool forceShow;     //�Ƿ�ǿ������
public:
    Card getFirstCard();    //Ĭ��÷��2
    bool getCanShow();
    bool isLegal(Color curColor,Card curCard,Card* remainSuit);    //��֤�Ƿ�Ϸ�
};

#endif
