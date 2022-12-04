#include "ChessPlayer.h"

ChessPlayer::ChessPlayer(string fName, string mName, string lName, string clubName, int rating) 
    : firstName(fName), middleName(mName), lastName(lName), club(clubName) {
        if (rating < 0 || rating > 2700) {
        USCF_rating = -1;
        }
        else {
            USCF_rating = rating;
        }
        numWins = 0;
        numLosses = 0;
        numDraws = 0;
        score = 0;
}

string ChessPlayer::getMiddleInitial() {
    if (middleName == "N/A") {
        return "";
    }
    else {
        string MI{};
        MI.push_back(middleName.at(0));
        return MI;
    }
}

string ChessPlayer::getPlayerName() {
    if (getFirstName().empty() || getLastName().empty()) {
        return "Player name is unknown.";
    }
    else {
        if (getMiddleInitial().empty()) {
            return getFirstName() + " " + getLastName();
        }
        else {
            return getFirstName() + " " + getMiddleInitial() + " " + getLastName();
        }
    }
}

string ChessPlayer::getClubName() {
    if (club.empty()) {
        return "Club name is unknown.";
    }
    else {
        return club;
    }
}

void ChessPlayer::setRating(int rating) {
    if (rating < 0) {
        rating = 1;
    }
    else if (rating > 2700) {
        rating = 2700;
    }
    USCF_rating = rating;
}

void ChessPlayer::PrintRecord() {
    cout << "Record: " << getNumWins() << "-" << getNumLosses() << "-" << getNumDraws() << endl;
}
void ChessPlayer::PrintPlayerInfo() {
    cout << getPlayerName() << endl;
    cout << "Club: " << getClubName() << endl;
    cout << "USCF Rating: ";
    if (getRating() == -1) {
        cout << "Unrated" << endl;
    }
    else {
        cout << getRating() << endl;
    }
    PrintRecord();
    cout << endl;
}