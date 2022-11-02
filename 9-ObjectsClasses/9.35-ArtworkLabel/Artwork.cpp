#include "Artwork.h"
#include <iostream>

// TODO: Define default constructor
Artwork::Artwork() {
    title = "unknown";
    yearCreated = -1;
}

// TODO: Define second constructor to initialize
//       private fields (title, yearCreated, artist)
Artwork::Artwork(string _title, int _yearCreated, Artist _artist) {
    title = _title;
    yearCreated = _yearCreated;
    artist = _artist;
}

// TODO: Define get functions: GetTitle(), GetYearCreated()
string Artwork::GetTitle() { return title; }
int Artwork::GetYearCreated() { return yearCreated; }

// TODO: Define PrintInfo() function
//       Call the PrintInfo() function in the Artist class to print an artist's information 
void Artwork::PrintInfo() {
    artist.PrintInfo();
    cout << "Title: " << title << ", " << yearCreated << endl;
}