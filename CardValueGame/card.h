#ifndef CARD_H
#define CARD_H

#include <QString>
#include <QStringList>

class Card {
    public:
        Card();
        Card(int faceNbr, int suitNbr);
        QString getFace();
        QString getSuit();
        int getValue();
        QString toString();

    private:
        int m_FaceNbr;
        int m_SuitNbr;
        static QStringList s_Faces;
        static QStringList s_Suits;
};

#endif // CARD_H
