#ifndef COLOR_H
#define COLOR_H
#include <iostream>
#include <string>

using namespace std;

class Color {
private:
    int index;
    string face;
    static Color** values;
    Color(int index, string face);
    virtual ~Color(){};

public:
    static Color* SPADE ;
    static Color* HEART ;
    static Color* CLUB ;
    static Color* DIAMOND ;

    int getIndex();
    void setIndex(int index);
    string getFace();
    void setFace(string face);
    string getFaceByIndex(int index);
};

#endif // COLOR_H
