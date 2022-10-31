#include <iostream>

using namespace std;

int main()
{
   cout << "Difficulty Levels\n\n";
   cout << "1 - Easy\n";
   cout << "2 - Normal\n";
   cout << "3 - Hard\n\n";

   int choice;

   cout << "Choice: ";
   cin >> choice;

   switch (choice)
   {
      case 1:
         cout << "You picked Easy." << endl;
         break;
      case 2:
         cout << "You picked Normal." << endl;
         break;
      case 3:
         cout << "You picked Hard." << endl;
         break;
      default:
         cout << "You made an illegal choice." << endl;
   }
   return 0;
}