#ifndef CHESS_PLAYER_H
#define CHESS_PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class ChessPlayer {
private:
    string firstName;
    string middleName;
    string lastName;
    string club;
    int USCF_rating;
    int numWins;
    int numLosses;
    int numDraws;
    double score;

public:
    ChessPlayer(string fName="", string mName="", string lName="", string clubName="", int rating=-1);
    string getFirstName() { return firstName; }
    string getMiddleInitial();
    string getLastName() { return lastName; }
    string getPlayerName();
    string getClubName();
    int getRating() { return USCF_rating; }
    int getNumWins() { return numWins; }
    int getNumLosses() { return numLosses; }
    int getNumDraws() { return numDraws; }
    int getTotalGamesPlayed() { return numWins + numLosses + numDraws; }
    double getScore() { return score; }

    void setFirstName(string fName) { firstName = fName; }
    void setMiddleName(string mName) { middleName = mName; }
    void setLastName(string lname) { lastName = lname; }
    void setClubName(string clubName) { club = clubName; }
    void setRating(int rating);

    void IncreaseScore(double value) { score += value; }
    void ApplyWin() { numWins++; }
    void ApplyLoss() { numLosses++; }
    void ApplyDraw() { numDraws++; }

    void PrintRecord();
    void PrintPlayerInfo();
};

#endif