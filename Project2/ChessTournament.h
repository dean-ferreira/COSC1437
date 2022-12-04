#ifndef CHESS_TOURNAMENT_H
#define CHESS_TOURNAMENT_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

#include "ChessPlayer.h"
#include "ChessMatch.h"

using namespace std;

class ChessTournament {
private:
    vector<ChessPlayer> players;
    vector<vector<ChessPlayer>> playerGroups;
    vector<ChessPlayer> qualifiedPlayers;
    vector<ChessMatch> eliminationMatches;
    ChessPlayer finalWinner;

    bool rosterComplete;
    bool groupStageComplete;
    bool startedEliminationRounds;
    bool tournamentComplete;

    int currentGroup;
    int groupRound;
    int eliminationRound;

    string tournamentFileName;

public:
    ChessTournament();
    void OpenTournament();
    void SaveTournament();
    void PrintMenu();
    void InputPlayersFromFile();
    void ManuallyInputPlayers();
    void PrinterPlayersInfo();
    void CreateGroups();
    void PrintGroups();
    void PlayGroupMatch();
    void DetermineQualifiedPlayers();
    void PlayEliminationRound();
    void CreateEliminationMatches();
    ChessPlayer getWinner() { return finalWinner; }
};

#endif