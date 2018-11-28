#ifndef _RULE_CPP_
#define _RULE_CPP_

#include "Card.cpp"

class Rule{
private:
    Card firstCard;     //第一圈第一轮第一张
    bool canShow;       //是否允许卖牌
    bool canSurvive;    //是否允许对于卖牌首轮逃头子true首轮可出false首轮不可以出
    bool isTeam;        //是否打对家
    bool forceShow;     //是否强制卖牌
public:
    Card getFirstCard();    //默认梅花2
    bool getCanShow();
    bool isLegal(Color curColor,Card curCard,Card* remainSuit);    //验证是否合法
};

#endif
