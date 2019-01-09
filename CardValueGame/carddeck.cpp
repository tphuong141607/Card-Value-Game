#include "carddeck.h"
#include <QTextStream>

QTextStream cout(stdout);

static int const SUIT_NUM = 4;
static int const FACE_NUM = 13;

CardDeck::CardDeck() {
    restoreDeck();
}

void CardDeck::restoreDeck() {
    if(!isEmpty()) {
        qDeleteAll(*this);
        clear();
    }
    for(int suit = 1; suit <= SUIT_NUM; suit++) {
        for(int face = 1; face <= FACE_NUM; face++) {
            append(new Card(face, suit));
        }
    }
}

CardHand CardDeck::deal(int handSize) {
    int randCard;
    CardHand *hand = new CardHand();

    for(int i = 0; i < handSize; i++) {
            srand(time(NULL));
            randCard = rand() % (this->size()-i);
            hand->append(this->at(randCard));
            this->removeAt(randCard);
        }
    return *hand;
}

QString CardDeck::toString() {
    QString result;
    for(Card *card : *this) {
        result.append(card->toString() + "\n ");
    }
    return result;
}

int CardDeck::getCardsLeft() {
    return size()-1;
}


