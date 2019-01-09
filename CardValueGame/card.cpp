#include "card.h"

/* Note: Ace = 1, J = 11, Q = 12, K = 13 */
QStringList Card::s_Faces = QStringList()
        << "Ace" << "2" << "3" << "4"
        << "5" << "6" << "7" << "8"
        << "9" << "10" << "J" << "Q"<< "K";

/* Note: Heart = 1, Clubs = 2, Spades = 3, Diamond = 4 */
QStringList Card::s_Suits = QStringList()
        << "Heart" << "Clubs" << "Spades" << "Diamond";

Card::Card()
    : m_FaceNbr(0), m_SuitNbr(0) {}

Card::Card(int faceNbr, int suitNbr)
    : m_FaceNbr(faceNbr), m_SuitNbr(suitNbr) {}

QString Card::getFace() {
    switch(m_FaceNbr) {
        case 1: return s_Faces.at(0);
            break;
        case 2: return s_Faces.at(1);
            break;
        case 3: return s_Faces.at(2);
            break;
        case 4: return s_Faces.at(3);
            break;
        case 5: return s_Faces.at(4);
            break;
        case 6: return s_Faces.at(5);
            break;
        case 7: return s_Faces.at(6);
            break;
        case 8: return s_Faces.at(7);
            break;
        case 9: return s_Faces.at(8);
            break;
        case 10: return s_Faces.at(9);
            break;
        case 11: return s_Faces.at(10); // J
            break;
        case 12: return s_Faces.at(11); // Q
            break;
        case 13: return s_Faces.at(12); // K
            break;
        default : return QString("No Available Face Found");
    }
}

QString Card::getSuit() {
    switch(m_SuitNbr) {
        case 1: return s_Suits.at(0);
            break;
        case 2: return s_Suits.at(1);
            break;
        case 3: return s_Suits.at(2);
            break;
        case 4: return s_Suits.at(3);
            break;
        default : return QString("No Available Suit Found");
    }
}

/*  the rules of the game of bridge:
 * Ace = 4, King = 3, Queen = 2, Jack = 1
 * all other cards have 0 value */
int Card::getValue() {
    switch(m_FaceNbr) {
        case 1: return 4;
            break;
        case 11: return 1;
            break;
        case 12: return 2;
            break;
        case 13: return 3;
            break;
        default : return 0;
    }
}

QString Card::toString() {
    return QString("%1 of %2").arg(getSuit()).arg(getFace());
}
