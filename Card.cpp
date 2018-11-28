#ifndef _CARD_CPP_
#define _CARD_CPP_
#include "Color.cpp"

class Card {
public:
    Color * card_color;
    string face;    //��ʾ�ַ�
    int point;  //����
    int score;  //����
    //���캯��
    Card () {}; //Ĭ�Ϲ��캯��
    Card(Color * card_color_buffer, string face_buffer, int point_buffer, int score_buffer) {
        card_color = card_color_buffer;
        face = face_buffer;
        point = point_buffer;
        score = score_buffer;
    }
};

#endif

