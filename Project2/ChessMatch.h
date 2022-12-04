#ifndef CHESS_MATCH_H
#define CHESS_MATCH_H

#include <iostream>
#include <string>

#include "ChessPlayer.h"

using namespace std;

class ChessMatch {
private:
    ChessPlayer* p1;
    ChessPlayer* p2;
    ChessPlayer* winner;
    ChessPlayer* loser;
    bool drawExists;

public:
    ChessMatch();
    ChessMatch(ChessPlayer* player1, ChessPlayer* player2);
    void setPlayers(ChessPlayer* player1, ChessPlayer* player2);
    void ConductMatch();
    ChessPlayer* getWinner() { return winner; }
    ChessPlayer* getLoser() { return loser; }
    bool DrawExists() { return drawExists; }
};

#endif