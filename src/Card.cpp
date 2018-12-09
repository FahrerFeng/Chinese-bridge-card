#include "Card.h"

Card* Card::PIG = new Card(Color::SPADE, 12, "Q", 0);
Card* Card::PEACH = new Card(Color::HEART, 14, "A", 0);
Card* Card::EVIL = new Card(Color::CLUB, 10, "10", 0);
Card* Card::SHEEP = new Card(Color::DIAMOND, 11, "J", 0);

Card::Card(Color* color, int point, string face, int score) {
    this->color = color;
    this->point = point;
    this->face = face;
    this->score = score;
};

vector<Card*>& Card::init(){
    vector<Card*>* poker = new vector<Card*>;
    //生成四种花色
    for (int i = 2; i <= 14; i++) {
        string face;
        if (i == 11) face = "J";
        else if (i == 12) face = "Q";
        else if (i == 13) face = "K";
        else if (i == 14) face = "A";
        else face = to_string(i);

        poker->push_back(new Card(Color::SPADE, i, face, 0));
        poker->push_back(new Card(Color::HEART, i, face, 0));
        poker->push_back(new Card(Color::CLUB, i, face, 0));
        poker->push_back(new Card(Color::DIAMOND, i, face, 0));
    }
    return *poker;
}

bool Card::compareCard(Card* card1, Card* card2) {
    int colorCompare;
    colorCompare = card1->color->getIndex() - card2->color->getIndex();
    if ( colorCompare > 0) {
        return false;
    }else if ( colorCompare < 0) {
        return true;
    }else {
         colorCompare = card1->point - card2->point;
        if ( colorCompare > 0) {
            return true;
        }else {
            return false;
        }
    }
}
