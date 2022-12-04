/*
Write a program that takes a date as input and outputs the date's season in the northern hemisphere. The input is a string to represent the month and an int to represent the day. Note: End with a newline.

Ex: If the input is:

April 11
the output is:

Spring
In addition, check if the string and int are valid (an actual month and day).

Ex: If the input is:

Blue 65
the output is:

Invalid 
The dates for each season in the northern hemisphere are:
Spring: March 20 - June 20
Summer: June 21 - September 21
Autumn: September 22 - December 20
Winter: December 21 - March 19
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;
   
   cin >> inputMonth;
   cin >> inputDay;
   
   if (inputMonth == "January") {
      if (1 <= inputDay && inputDay <= 31) {
         cout << "Winter" << endl;
      }
      else {
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "February") {
      if (1 <= inputDay && inputDay <= 29) {
         cout << "Winter" << endl;
      }
      else {
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "March") {
      if (1 <= inputDay && inputDay <= 19) {
         cout << "Winter" << endl;
      }
      else if (20 <= inputDay && inputDay <= 31) {
         cout << "Spring" << endl;
      }
      else {
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "April") {
      if (1 <= inputDay && inputDay <= 30) {
         cout << "Spring" << endl;
      }
      else {
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "May") {
      if (1 <= inputDay && inputDay <= 31) {
         cout << "Spring" << endl;
      }
      else {
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "June") {
      if (1 <= inputDay && inputDay <= 20) {
         cout << "Spring" << endl;
      }
      else if (21 <= inputDay && inputDay <= 30) {
         cout << "Summer" << endl;
      }
      else {
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "July") {
      if (1 <= inputDay && inputDay <= 30) {
         cout << "Summer" << endl;
      }
      else {
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "August") {
      if (1 <= inputDay && inputDay <= 31) {
         cout << "Summer" << endl;
      }
      else {
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "September") {
      if (1 <= inputDay && inputDay <= 21) {
         cout << "Summer" << endl;
      }
      else if (22 <= inputDay && inputDay <= 30) {
         cout << "Autumn" << endl;
      }
      else {
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "October") {
      if (1 <= inputDay && inputDay <= 31) {
         cout << "Autumn" << endl;
      }
      else {
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "November") {
      if (1 <= inputDay && inputDay <= 30) {
         cout << "Autumn" << endl;
      }
      else {
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "December") {
      if (1 <= inputDay && inputDay <= 20) {
         cout << "Summer" << endl;
      }
      else if (21 <= inputDay && inputDay <= 31) {
         cout << "Autumn" << endl;
      }
      else {
         cout << "Invalid" << endl;
      }
   }
   else {
      cout << "Invalid" << endl;
   }

   return 0;
}