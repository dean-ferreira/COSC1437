#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;

// TODO: Implement mutator functions - 
//       SetName(), SetWins(), SetLosses()
void Team::SetName(string _name) {
    name = _name;
}

void Team::SetWins(int numWins) {
    wins = numWins;
}
void Team::SetLosses(int numLosses) {
    losses = numLosses;
}

// TODO: Implement accessor functions - 
//       GetName(), GetWins(), GetLosses()
string Team::GetName() {
    return name;
}

int Team::GetWins() {
    return wins;
}

int Team::GetLosses() {
    return losses;
}

// TODO: Implement GetWinPercentage()
double Team::GetWinPercentage() {
    if (wins == 0 && losses == 0) {
        return 0.0;
    }
    return static_cast<double>(wins) / (wins + losses);
}

// TODO: Implement PrintStanding()
void Team::PrintStanding() {
    cout << setprecision(2) << fixed;
    cout << "Win percentage: " << GetWinPercentage() << endl;
    if (GetWinPercentage() >= 0.5) {
        cout << "Congratulations, Team " << name << " has a winning average!" << endl;
    }
    else {
        cout << "Team " << name << " has a losing average." << endl;
    }
}