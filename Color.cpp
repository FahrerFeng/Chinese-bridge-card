//花色类
#ifndef _COLOR_CPP_
#define _COLOR_CPP_
#include<iostream>
#include<string>

using namespace std;

class Color {
private:
    int index;
    string face;
public:
    Color () {} //默认构造函数
    Color(int index, string face) {
        this -> index = index;
        this -> face = face;
    }
    int getIndex() {
        return index;
    }
    void setIndex(int index) {
        this -> index = index;
    }
    string getFace() {
        return face;
    }
    void setFace(string face) {
        this -> face = face;
    }
    string getFaceByIndex(int index) {
        Color CardColor[4] = {
            Color(1, "S"),
            Color(2, "H"),
            Color(3, "C"),
            Color(4, "D"),
        };
        for (int i = 0; i < 4 ; i ++) {
            if (index == CardColor[i].getIndex())
                return CardColor[i].getFace();
        }
        return NULL;
    }
};
#endif
