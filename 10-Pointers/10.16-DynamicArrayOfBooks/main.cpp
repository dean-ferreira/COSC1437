/*
This exercise builds on a previous exercise in the Structures chapter in which you were asked to create a book structure. Here, you are asked to create a dynamic array of books and use a function to manipulate it.

(1) Get from input the name of a text file where the book information is stored. The book starts with the number of books in the file (use this number for the array size). Declare the array of books, and populate it with the file content, which will look like:

n //number of books in the file

<Title 1>
<Author 1>
<Year of publication>
<number of pages>

<Title 2>
<Author 2>
<Year of publication>
<number of pages>
...
Print a summary of the file consisting of the number of books and a list of titles and authors (in the same order they appeared in the file), in this format:

There are <n> books in inventory.
<Title 1>, by <Author 1>
<Title 2>, by <Author 2>
...
(2) Complete a function longestBook() which searches the array and returns the index of the longest book (most pages). The function must receive as parameter a Book pointer and the array size. Use the index to print the following message (in main):

<Title X> by <Author X> is the longest book in inventory, with <pages> pages.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Book {
    string title;
    string author;
    int yearPublished;
    int numPages;
};

void PrintBooks(Book books[], int numBooks) {
    cout << "There are " << numBooks << " books in inventory." << endl;
    for (int i = 0; i < numBooks; i++) {
        cout << books[i].title << ", by " << books[i].author << endl;
    }
}

int longestBook(Book* book, int numBooks) {
    int index = 0;
    for (int i = 1; i < numBooks; i++) {
        if (book[index].numPages < book[i].numPages) {
            index = i;
        }
    }

    return index;
}

int main() {
    string fileName {};
    cin >> fileName;

    ifstream input;
    input.open(fileName);

    if (!input.is_open()) {
        cout << "File not found" << endl;
        return 1;
    }

    int numBooks {}; // number of books in the file
    input >> numBooks;
    input.ignore();
    Book* books = new Book[numBooks];

    string blankLine {};
    for (int i = 0; i < numBooks; i++) {
        getline(input, blankLine);
        getline(input, books[i].title);
        getline(input, books[i].author);
        input >> books[i].yearPublished;
        input >> books[i].numPages;
        input.ignore();
    }

    PrintBooks(books, numBooks);
    int index = longestBook(books, numBooks);
    cout << books[index].title << " by " << books[index].author << " is the longest book in inventory, with " << books[index].numPages << " pages." << endl;

    delete[] books;
    return 0;
}