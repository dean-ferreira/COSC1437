/*
Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

(1) Prompt the user to enter five numbers, being five people's weights. Store the numbers in a vector of doubles. Output the vector's numbers on one line, each number followed by one space. (2 pts)

Ex:

Enter weight 1:
236.0
Enter weight 2:
89.5
Enter weight 3:
142.0
Enter weight 4:
166.3
Enter weight 5:
93.0
You entered: 236.00 89.50 142.00 166.30 93.00
(2) Also output the total weight, by summing the vector's elements. (1 pt)

(3) Also output the average of the vector's elements. (1 pt)

(4) Also output the max vector element. (2 pts)


Ex:

Enter weight 1:
236.0
Enter weight 2:
89.5
Enter weight 3:
142.0
Enter weight 4:
166.3
Enter weight 5:
93.0
You entered: 236.00 89.50 142.00 166.30 93.00 

Total weight: 726.80
Average weight: 145.36
Max weight: 236.00
*/

#include <iostream>
#include <iomanip>              // For setprecision
#include <vector>

using namespace std;

int main() {

   vector<double> weightVect;
   double newWeight {};
   int listSize = 5;
   double totalWeight {};
   double weightAverage {};
   double maxWeight {};
   
   for (int i = 1; i <= listSize; i++) {
      cout << "Enter weight " << i << ":" << endl;
      cin >> newWeight;
      weightVect.push_back(newWeight);
      totalWeight += newWeight;
      
      if (i == 1) {
         maxWeight = newWeight;
      }
      else {
         if (newWeight > maxWeight) {
            maxWeight = newWeight;
         }
      }
   }
   
   cout << fixed << setprecision(2);
   cout << "You entered: ";
   for (int i = 0; i < listSize; i++) {
      cout << weightVect.at(i) << " ";
   }
   cout << endl << endl;
   
   weightAverage = totalWeight / listSize;
   
   cout << "Total weight: " << totalWeight << endl;
   cout << "Average weight: " << weightAverage << endl;
   cout << "Max weight: " << maxWeight << endl;
   

   return 0;
}