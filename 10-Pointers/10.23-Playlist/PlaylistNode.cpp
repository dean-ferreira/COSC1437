#include "PlaylistNode.h"

PlaylistNode::PlaylistNode() {
    uniqueID = "none";
    songName = "none";
    artistName = "none";
    songLength = 0;
    nextNodePtr = nullptr;
}

PlaylistNode::PlaylistNode(string _uniqueID, string _songName, string _artistName, int _songLength) {
    uniqueID = _uniqueID;
    songName = _songName;
    artistName = _artistName;
    songLength = _songLength;
    nextNodePtr = nullptr;
}

void PlaylistNode::InsertAfter(PlaylistNode* nodeLoc) {
    PlaylistNode* tempNext;
    tempNext = this->GetNext();
    this->SetNext(nodeLoc);
    nodeLoc->SetNext(tempNext);
}

void PlaylistNode::PrintPlaylistNode() {
    cout << "Unique ID: " << this->GetID() << endl;
    cout << "Song Name: " << this->GetSongName() << endl;
    cout << "Artist Name: " << this->GetArtistName() << endl;
    cout << "Song Length (in seconds): " << this->GetSongLength() << endl;
}