//Thao Phuong

#include <QApplication>
#include "carddeck.h"
#include <QTextStream>
#include <QMessageBox>
#include <QInputDialog>
#include <QTextStream>

int main(int argc, char* argv[]) {

    QApplication app(argc, argv);
    QTextStream cout(stdout);
    CardHand hand1, hand2;
    int handSize, playerScore, progScore;
    cout << "How many cards in a hand? " << flush;

    handSize = QInputDialog::getInt(0, QString("getInt()"),
        QString("How many cards in hand?"), 1, 3);
    QMessageBox::StandardButton sb;

    do {
        CardDeck deck;
        hand1 = deck.deal(handSize);
        cout << "Here is your hand:" << endl;
        cout << hand1.toString() << endl;
        playerScore = hand1.getValue();
        cout << QString("Your score is: %1 points.")
                         .arg(playerScore) << endl;

        // Now a hand for the dealer:
        hand2 = deck.deal(handSize);
        progScore = hand2.getValue();
        cout << "Here is my hand:" << endl;
        cout << hand2.toString() << endl;
        cout << QString("My score is: %1 points.")
                         .arg(progScore) << endl;
        cout << QString("%1 win!!")
              .arg((playerScore > progScore)?"You":"I") << endl;

        sb = QMessageBox::question(0, QString("QMessageBox::question()"),
            QString("Another hand?"), QMessageBox::Yes | QMessageBox::No);

    } while (sb == QMessageBox::Yes);
}
