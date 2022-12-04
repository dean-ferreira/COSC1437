#include <iostream>
#include "PlaylistNode.h"

using namespace std;

void PrintMenu(const string playlistTitle);
PlaylistNode *ExecuteMenu(char option, string playlistTitle, PlaylistNode *headNode);
void AddSong(PlaylistNode* headNode);
void RemoveSong(PlaylistNode* headNode);
void ChangeSongPosition(PlaylistNode* headNode);
void OutputByArtist(PlaylistNode* headNode);
void OutputPlaylistLength(PlaylistNode* headNode);
void OutputFullPlaylist(PlaylistNode* headNode, string playlistTitle);

int main()
{
    string playlistTitle {};
    cout << "Enter playlist's title:" << endl;
    getline(cin, playlistTitle);
    
    char userChoice {};
    int validChoicesSize {7};
    char validChoices[] = {'a', 'd', 'c', 's', 't', 'o', 'q'};
    bool validChoice = false;
    PlaylistNode* headNode;
    headNode = new PlaylistNode();

    while (userChoice != 'q') {
        while (!validChoice) {
            PrintMenu(playlistTitle);
            cout << endl << "Choose and option:" << endl;
            cin >> userChoice;
            for (int i = 0; i < validChoicesSize; i++) {
                if (userChoice == validChoices[i]) {
                    validChoice = true;
                }
            }
        }

        cin.ignore();
        ExecuteMenu(userChoice, playlistTitle, headNode);
        cout << endl;
        validChoice = false;
    }
    return 0;
}

void PrintMenu(const string playlistTitle)
{
    cout << playlistTitle << " PLAYLIST MENU" << endl;
    cout << "a - Add song" << endl;
    cout << "d - Remove song" << endl;
    cout << "c - Change position of song" << endl;
    cout << "s - Output songs by specific artist" << endl;
    cout << "t - Output total time of playlist (in seconds)" << endl;
    cout << "o - Output full playlist" << endl;
    cout << "q - Quit" << endl;
}

PlaylistNode *ExecuteMenu(char option, string playlistTitle, PlaylistNode *headNode)
{
    switch (option) {
        case 'a':
            AddSong(headNode);
            break;
        case 'd':
            RemoveSong(headNode);
            break;
        case 'c':
            break;
        case 's':
            break;
        case 't':
            break;
        case 'o':
            OutputFullPlaylist(headNode, playlistTitle);
            break;
        case 'q':
            cout << "Quitting Program" << endl;
            break;
    }

    return headNode;
}

void AddSong(PlaylistNode* headNode) {
    string uniqueID {}, songName {}, artistName {};
    int songLength {};

    cout << "ADD SONG" << endl;
    cout << "Enter song's unique ID:" << endl;
    getline(cin, uniqueID);
    
    cout << "Enter song's name:" << endl;
    getline(cin, songName);

    cout << "Enter artist's name:" << endl;
    getline(cin, artistName);

    cout << "Enter song's length (in seconds):" << endl;
    cin >> songLength;
    cin.ignore();
    PlaylistNode* newNode;
    newNode = new PlaylistNode(uniqueID, songName, artistName, songLength);
    PlaylistNode* lastNode = headNode;
    while (lastNode->GetNext() != nullptr) {
        lastNode = lastNode->GetNext();
    }
    lastNode->InsertAfter(newNode);
}

void RemoveSong(PlaylistNode* headNode) {
    PlaylistNode* lastNode;
    lastNode = headNode;

    string targetID {};
    cout << "Enter song's unique ID:" << endl;
    cin >> targetID;

    while (lastNode->GetNext() != nullptr) {
        if (lastNode->GetNext()->GetID() == targetID) {
            cout << "\"" << lastNode->GetNext()->GetSongName() << "\"  removed." << endl;
            lastNode->SetNext(lastNode->GetNext()->GetNext());
            break;
        }
        else {
            lastNode = lastNode->GetNext();
        }
    }
}

void ChangeSongPosition(PlaylistNode* headNode) {
    int currentPos {};
    cout << "Enter song's current position:" << endl;
    cin >> currentPos;

    int newPos {};
    cout << "Enter new position for song:" << endl;
    cin >> newPos;

    PlaylistNode* lastNode = headNode;
    for (int i = 0; i < currentPos; i++) {
        lastNode = lastNode->GetNext();
    }

    
}

void OutputFullPlaylist(PlaylistNode* headNode, string playlistTitle) {
    PlaylistNode* lastNode = headNode;
    int trackNumber {1};
    if (lastNode->GetNext() == nullptr) {
        cout << "Playlist is empty" << endl;
    }
    else {
        cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;
        while (lastNode->GetNext() != nullptr) {
            cout << trackNumber << "." << endl;
            lastNode->GetNext()->PrintPlaylistNode();
            cout << endl;
            trackNumber++;
            lastNode = lastNode->GetNext();
        }
    }
}