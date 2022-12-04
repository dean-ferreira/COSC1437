#ifndef ARTISTH
#define ARTISTH

#include <string>
using namespace std;

class Artist{
   public:
      Artist();

      Artist(string _artistName, int _birthYear, int _deathYear);

      string GetName() const;

      int GetBirthYear() const;

      int GetDeathYear() const;

      void PrintInfo() const;
   
   private:
      // TODO: Declare private data members - artistName, birthYear, deathYear
      string artistName;
      int birthYear;
      int deathYear;
};

#endif