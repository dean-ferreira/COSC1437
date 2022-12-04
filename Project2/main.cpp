#include <iostream>
#include <string>
#include <iomanip>

#include "ChessPlayer.h"
#include "ChessMatch.h"
#include "ChessTournament.h"

using namespace std;

void PrintMainMenu() {
    cout << "0 - Quit" << endl;
    cout << "1 - Create new tournament" << endl;
    cout << "2 - Load existing tournament" << endl;
}

int main() {

    // ChessTournament tourney;
    // tourney.ManuallyInputPlayers();
    // tourney.InputPlayersFromFile();
    // tourney.PrinterPlayersInfo();
    
    int mainChoice {};
    bool runningProgam = true;
    bool tournamentOpened = false;

    while (runningProgam) {
        if (!tournamentOpened) {
            PrintMainMenu();
        }
        cin >> mainChoice;

        ChessTournament tourney;
        switch(mainChoice) {
            case 0:
                cout << endl;
                cout << "Closing program..." << endl;
                runningProgam = false;
                return 0;
            case 1:
                cout << endl;
                tourney.OpenTournament();
                cout << endl;
                break;
            case 2:
                cout << endl;
                cout << "Function in progress" << endl;
                cout << endl;
                break;
        }
    }
    return 0;
}