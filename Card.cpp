#ifndef _CARD_CPP_
#define _CARD_CPP_
#include "Color.cpp"

class Card {
public:
    Color * card_color;
    string face;    //显示字符
    int point;  //点数
    int score;  //分数
    //构造函数
    Card () {}; //默认构造函数
    Card(Color * card_color_buffer, string face_buffer, int point_buffer, int score_buffer) {
        card_color = card_color_buffer;
        face = face_buffer;
        point = point_buffer;
        score = score_buffer;
    }
};

#endif

