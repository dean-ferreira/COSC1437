#include "ChessMatch.h"

ChessMatch::ChessMatch() {

}

ChessMatch::ChessMatch(ChessPlayer* player1, ChessPlayer* player2) 
    : p1(player1), p2(player2), drawExists(false) {
}

void ChessMatch::setPlayers(ChessPlayer* player1, ChessPlayer* player2) {
    p1 = player1;
    p2 = player2;
}

void ChessMatch::ConductMatch() {
    int choice {};
    cout << p1->getPlayerName() << " VS. " << p2->getPlayerName() << endl;
    cout << "Enter the results: " << endl;
    cout << "1 - " << p1->getPlayerName() << " has won." << endl;
    cout << "2 - " << p2->getPlayerName() << " has won." << endl;
    cout << "3 - Draw." << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << p1->getPlayerName() << " has defeated " << p2->getPlayerName() << endl;
            winner = p1;
            loser = p2;
            p1->IncreaseScore(3);
            p1->ApplyWin();
            p2->ApplyLoss();
            break;
        case 2:
            cout << p2->getPlayerName() << " has defeated " << p1->getPlayerName() << endl;
            winner = p2;
            loser = p1;
            p2->IncreaseScore(3);
            p2->ApplyWin();
            p1->ApplyLoss();
            break;
        case 3:
            cout << "This match has ended in a draw." << endl;
            drawExists = true;
            p1->IncreaseScore(1);
            p2->IncreaseScore(1);
            p1->ApplyDraw();
            p2->ApplyDraw();
            break;
    }
    cout << endl;
}