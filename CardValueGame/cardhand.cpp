#include "cardhand.h"

CardHand::CardHand() {}

int CardHand::getValue() {
    int value = 0;
    for(Card *card : *this) {
        value += card->getValue();
    }
    return value;
}

QString CardHand::toString() {
    QString str("\n");
    for (Card *card : *this) {
          str.append(card->toString());
          str.append("\n");
    }
    return str;
}
