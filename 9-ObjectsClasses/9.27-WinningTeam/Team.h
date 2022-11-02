#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team {
   // TODO: Declare private data members - name, wins, losses
private:
    string name;
    int wins;
    int losses;
   
public:
   // TODO: Declare mutator functions - 
   //       SetName(), SetWins(), SetLosses()
   void SetName(string _name);
   void SetWins(int numWins);
   void SetLosses(int numLosses);
   
   // TODO: Declare accessor functions - 
   //       GetName(), GetWins(), GetLosses()
   string GetName();
   int GetWins();
   int GetLosses();
   
   // TODO: Declare GetWinPercentage()
   double GetWinPercentage();
   
   // TODO: Declare PrintStanding()
   void PrintStanding();
};

#endif