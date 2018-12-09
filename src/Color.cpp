#include "Color.h"

Color * Color::SPADE = new Color(1, "S");
Color * Color::HEART = new Color(2, "H");
Color * Color::CLUB = new Color(3, "C");
Color * Color::DIAMOND = new Color(4, "D");
Color ** Color::values = new Color*[4]{Color::SPADE, Color::HEART, Color::CLUB, Color::DIAMOND};

Color::Color(int index, string face) {
    this->index = index;
    this->face = face;
}
int Color::getIndex() {
    return this->index;
}

void Color::setIndex(int index) {
    this->index = index;
}

string Color::getFace() {
    return this->face;
}

void Color::setFace(string face) {
    this->face = face;
}

string Color::getFaceByIndex(int index) {
    for (int i = 0; i < 4 ; i++) {
        if (index == this->values[i]->getIndex())
            return this->values[i]->getFace();
    }
    return NULL;
}
