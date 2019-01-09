#ifndef CARDHAND_H
#define CARDHAND_H

#include <QString>
#include <QList>
#include <card.h>

class CardHand : public QList <Card*> {
    public:
        CardHand();
        int getValue();
        QString toString();
};

#endif // CARDHAND_H
