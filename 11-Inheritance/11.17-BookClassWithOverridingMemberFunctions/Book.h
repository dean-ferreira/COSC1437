#ifndef BOOKH
#define BOOKH

#include <string>

using namespace std;

class Book
{
public:
    void SetTitle(string userTitle);

    string GetTitle();

    void SetAuthor(string userAuthor);

    string GetAuthor();

    void SetPublisher(string userPublisher);

    string GetPublisher();

    void SetPublicationDate(string userPublicationDate);

    string GetPublicationDate();

    void PrintInfo();

protected:
    string title;
    string author;
    string publisher;
    string publicationDate;
};

#endif

/*
So in this problem, Book is the base class and Encyclopedia is the derived class.
Encyclopedia is pretty much just a Book with two extra attributes (edition and numVolumes)
Encyclopedia will inherit all other attributes AND all other functions defined in Book.
A function override will occur whenever you declare a function with the same name and parameters
inside of Encyclopedia

Since PrintInfo() is declared in the Book class and the Encyclopedia class inherits from Book,
at this point if an Encyclopedia object calls PrintInfo() it will use the PrintInfo() defined in Book.
This PrintInfo() defined in book will not print the Encyclopedia's edition or numVolumes. This
is why you need to override this function.

In order to override PrintInfo(), you need to declare and define PrintInfo() inside of the Encyclopedia class.
So overriding a function just means you are declaring and defining a function (that has been inherited from a base class)
inside of a derived class. Make sure you use the same name and parameters as declared in the base class.

if you declare PrintInfo() in the Encyclopedia class, anytime an Encyclopedia object calls PrintInfo
it will call the overridden version of PrintInfo() thats defined in the Encyclopedia class.
*/