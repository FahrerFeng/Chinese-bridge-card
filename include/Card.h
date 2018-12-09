#ifndef CARD_H
#define CARD_H
#include <vector>
#include <string>
#include "Color.h"
using namespace std;
class Card {
public:
    Color* color;
    int point;
    string face;
    int score;

    static Card* PIG;
    static Card* PEACH;
    static Card* EVIL;
    static Card* SHEEP;

    Card(Color* color, int point, string face, int score);
    static vector<Card*>& init();
    static bool compareCard(Card* card1, Card* card2);
};

#endif // CARD_H
