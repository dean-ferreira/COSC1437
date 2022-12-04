#ifndef PLAYLISTNODE_H
#define PLAYLISTNODE_H

#include <iostream>
#include <string>

using namespace std;

class PlaylistNode {
private:
    string uniqueID;
    string songName;
    string artistName;
    int songLength;
    PlaylistNode* nextNodePtr;

public:
    PlaylistNode();
    PlaylistNode(string _uniqueID, string _songName, string _artistName, int _songLength);
    void InsertAfter(PlaylistNode* nodeLoc);
    void SetNext(PlaylistNode* nodeLoc) { nextNodePtr = nodeLoc; }
    string GetID() { return uniqueID; }
    string GetSongName() { return songName; }
    string GetArtistName() { return artistName; }
    int GetSongLength() { return songLength; }
    PlaylistNode* GetNext() { return nextNodePtr; }
    void PrintPlaylistNode();
};

#endif