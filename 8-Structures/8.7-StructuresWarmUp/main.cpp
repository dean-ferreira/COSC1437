#include <iostream>

using namespace std;

// provide your definition of the Book structure below
struct Book {
   string title;
   string author;
   int year;
   int numPages;
};

int main() {
   
   //Declare a structure variable
   struct Book userBook;
   
   //Get user input to the four member variables of the structure variable
   getline(cin, userBook.title);
   getline(cin, userBook.author);
   cin >> userBook.year >> userBook.numPages;   
   
   cout << "Book title: " << userBook.title << endl;
   cout << "Book author: " << userBook.author << endl;
   cout << "Published in " << userBook.year << endl;
   cout << "Number of pages: " << userBook.numPages << endl;
}