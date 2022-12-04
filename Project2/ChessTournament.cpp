#include "ChessTournament.h"

ChessTournament::ChessTournament() {
    rosterComplete = false;
    groupStageComplete = false;
    startedEliminationRounds = false;
    tournamentComplete = false;
    currentGroup = 0;
    groupRound = 0;
    eliminationRound = 0;
    tournamentFileName = "";
}

void ChessTournament::OpenTournament() {
    bool runningTournament = true;
    int choice {};
    while (runningTournament) {
        PrintMenu();
        cin >> choice;
        switch (choice) {
            case 0:
                cout << "Saving Tournament Status..." << endl;
                cout << "Closing Tournament" << endl;
                SaveTournament();
                runningTournament = false;
                break;
            case 1:
                ManuallyInputPlayers();
                break;
            case 2:
                InputPlayersFromFile();
                break;
            case 3:
                CreateGroups();
                break;
            case 4:
                PlayGroupMatch();
                break;
            case 5:
                // cout << "Starting elimination rounds" << endl;
                startedEliminationRounds = true;
                DetermineQualifiedPlayers();
                CreateEliminationMatches();
                PlayEliminationRound();
                break;
            case 6:
                PlayEliminationRound();
                break;
        }
    } 
}

void ChessTournament::SaveTournament() {
    if (tournamentFileName.empty()) {
        cout << "Enter file name: " << endl;
        cin >> tournamentFileName;
    }

}

void ChessTournament::PrintMenu() {
    cout << "0 - Save and Close" << endl;
    if (!rosterComplete) {
        cout << "1 - Manually Input Players" << endl;
        cout << "2 - Input Players From File" << endl;
    }
    if (playerGroups.size() == 0 && rosterComplete) {
        cout << "3 - Create Groups" << endl;
    }
    if (playerGroups.size()) {
        if (!groupStageComplete) {
            cout << "4 - Run Next Set of Group Matches" << endl;
        }
    }
    if (groupStageComplete && !startedEliminationRounds) {
        cout << "5 - Start elimination rounds" << endl;
    }
    if (startedEliminationRounds && !tournamentComplete) {
        cout << "6 - Run next elimination round" << endl;
    }
    if (tournamentComplete) {
        cout << "Tournament winner: " << finalWinner.getFirstName() << endl;
    }

}

void ChessTournament::InputPlayersFromFile() {
    string fileName;
    cout << "Enter filename: ";
    cin >> fileName;
    cin.ignore();
    cout << endl;
    ifstream input;
    input.open(fileName);
    if (!input.is_open()) {
        cout << "File does not exist." << endl;
        return;
    }
    
    while(!input.fail()) {
        string firstName{}, middleName{}, lastName{}, club{}, space{};
        int rating;
        getline(input, firstName);
        getline(input, middleName);
        getline(input, lastName);
        getline(input, club);
        input >> rating;
        input.ignore();
        getline(input, space);
        ChessPlayer temp(firstName, middleName, lastName, club, rating);
        players.push_back(temp);
    }
    input.close();
    rosterComplete = true;
}

void ChessTournament::ManuallyInputPlayers() {
    int numPlayers {};
    cout << "Enter the number of Chess Players: " << endl;
    cin >> numPlayers;
    cin.ignore();
    for (int i = 0; i < numPlayers; i++) {
        string firstName{}, middleName{}, lastName{}, club{};
        int rating{};
        cout << "Enter Player" << i+1 << "'s first name: ";
        getline(cin, firstName);

        cout << "Enter Player" << i+1 << "'s middle name: ";
        getline(cin, middleName);

        cout << "Enter Player" << i+1 << "'s last name: ";
        getline(cin, lastName);

        cout << "Enter Player" << i+1 << "'s club name: ";
        getline(cin, club);

        cout << "Enter Player" << i+1 << "'s rating: ";
        cin >> rating;
        cin.ignore();

        ChessPlayer temp(firstName, middleName, lastName, club, rating);
        players.push_back(temp);
        cout << endl;
    }
    cout << endl;
    rosterComplete = true;
}

void ChessTournament::PrinterPlayersInfo() {
    for (size_t i = 0; i < players.size(); i++) {
        players.at(i).PrintPlayerInfo();
    }
}

void ChessTournament::CreateGroups() {
    int teamSize = players.size() / 4;
    for (size_t i = 0; i < teamSize; i++) {
        vector<ChessPlayer> tempGroup;
        for (size_t j = i; j < players.size(); j += teamSize) {
            tempGroup.push_back(players.at(j));
        }
        playerGroups.push_back(tempGroup);
    }
    PrintGroups();
}

void ChessTournament::PrintGroups() {
    if (groupStageComplete) {
        cout << "Group Stage Complete! Results: " << endl;
        for (size_t i = 0; i < playerGroups.size(); i++) {
            cout << "*** " << "Group " << char(65+i) << " ***" << endl;
            for (size_t j = 0; j < playerGroups.at(i).size(); j++) {
                ChessPlayer temp = playerGroups.at(i).at(j);
                cout << temp.getFirstName() << " Score: " << temp.getScore()<< " ";
                temp.PrintRecord();
                // cout << playerGroups.at(i).at(j).getFirstName() << endl;
            }
            cout << setfill('-') << setw(25) << "" << endl;
            cout << setfill(' ');
        }
    }
    else {
        for (size_t i = 0; i < playerGroups.size(); i++) {
            cout << "*** " << "Group " << char(65+i) << " ***" << endl;
            for (size_t j = 0; j < playerGroups.at(i).size(); j++) {
                cout << playerGroups.at(i).at(j).getPlayerName() << endl;
            }
            cout << setfill('-') << setw(25) << "" << endl;
            cout << setfill(' ');
        }
    }
}

void ChessTournament::PlayGroupMatch() {
    ChessMatch m1;
    ChessMatch m2;

    if (groupRound > 2) {
        return;
    }
    else if (currentGroup == playerGroups.size()) {
        groupRound++;
        currentGroup = 0;
    }

    switch(groupRound) {
        case 0:
            cout << "*** " << "Group " << char(65+currentGroup) << " ***";
            cout << " Round " << groupRound+1 << " ***" << endl;
            m1.setPlayers(&playerGroups.at(currentGroup).at(0), &playerGroups.at(currentGroup).at(1));
            m2.setPlayers(&playerGroups.at(currentGroup).at(2), &playerGroups.at(currentGroup).at(3));
            m1.ConductMatch();
            m2.ConductMatch();
            currentGroup++;
            break;
        case 1:
            cout << "*** " << "Group " << char(65+currentGroup) << " ***";
            cout << " Round " << groupRound+1 << " ***" << endl;
            m1.setPlayers(&playerGroups.at(currentGroup).at(0), &playerGroups.at(currentGroup).at(2));
            m2.setPlayers(&playerGroups.at(currentGroup).at(1), &playerGroups.at(currentGroup).at(3));
            m1.ConductMatch();
            m2.ConductMatch();
            currentGroup++;
            break;
        case 2:
            cout << "*** " << "Group " << char(65+currentGroup) << " ***";
            cout << " Round " << groupRound+1 << " ***" << endl;
            m1.setPlayers(&playerGroups.at(currentGroup).at(0), &playerGroups.at(currentGroup).at(3));
            m2.setPlayers(&playerGroups.at(currentGroup).at(1), &playerGroups.at(currentGroup).at(2));
            m1.ConductMatch();
            m2.ConductMatch();
            currentGroup++;
            if (currentGroup == playerGroups.size()) {
                groupStageComplete = true;
                PrintGroups();
            }
            break;
    }
}

void ChessTournament::DetermineQualifiedPlayers() {
    for (size_t i = 0; i < playerGroups.size(); i++) {
        ChessPlayer groupWinner = playerGroups.at(i).at(0);
        for (size_t j = 1; j < playerGroups.at(i).size(); j++) {
            if (playerGroups.at(i).at(j).getScore() > groupWinner.getScore()) {
                groupWinner = playerGroups.at(i).at(j);
            }
        }
        qualifiedPlayers.push_back(groupWinner);
    }

    // for (size_t i = 0; i < qualifiedPlayers.size(); i++) {
    //     cout << qualifiedPlayers.at(i).getPlayerName() << endl;
    // }
}

void ChessTournament::CreateEliminationMatches() {

    eliminationMatches.clear();
    for (size_t i = 0; i < qualifiedPlayers.size() - 1; i+=2) {
        ChessMatch m1;
        m1.setPlayers(&qualifiedPlayers.at(i), &qualifiedPlayers.at(i+1));
        eliminationMatches.push_back(m1);
    }
}

void ChessTournament::PlayEliminationRound() {
    if (qualifiedPlayers.size() == 1) {
        tournamentComplete = true;
        finalWinner = qualifiedPlayers.at(0);
        return;
    }
    qualifiedPlayers.clear();
    cout << "Elimination Round " << eliminationRound+1 << endl;
    for (size_t i = 0; i < eliminationMatches.size(); i++) {
        eliminationMatches.at(i).ConductMatch();
        qualifiedPlayers.push_back(*eliminationMatches.at(i).getWinner());
    }
    if (qualifiedPlayers.size() == 1) {
        tournamentComplete = true;
        finalWinner = qualifiedPlayers.at(0);
    }
    else {
        eliminationRound++;
        CreateEliminationMatches();
    }
}