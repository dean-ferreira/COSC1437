#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Key {
    char encoded {};
    char decoded {};
};

int main() {
    string msgFile {};
    string keyFile {};
    cin >>  msgFile >> keyFile;

    ifstream inFS;
    ofstream outFS;

    inFS.open(keyFile);

    if (!inFS.is_open()) {
        cout << "File not found" << endl;
        return 1; // 1 indicates error
    }

    vector<Key> decypher;
    Key loader;
    inFS >> loader.encoded;
    inFS >> loader.decoded;
    while (!inFS.fail()) {
        decypher.push_back(loader);
        inFS >> loader.encoded;
        inFS >> loader.decoded;
    }

    inFS.close();

    string message {};
    inFS.open(msgFile);
    if (!inFS.is_open()) {
        cout << "File not found" << endl;
        return 1; // 1 indicates error
    }
    string lineInput {};
    getline(inFS, lineInput);
    while (!inFS.fail()) {
        message.append(lineInput);
        getline(inFS, lineInput);
    }

    inFS.close();

    outFS.open("output.txt");
    char writeChar {};
    for (unsigned int i = 0; i < message.length(); i++) {
        writeChar = message.at(i);
        for (unsigned int j = 0; j < decypher.size(); j++) {
            if (message.at(i) == decypher.at(j).encoded) {
                writeChar = decypher.at(j).decoded;
            }
        }
        outFS << writeChar;
    }
    outFS << endl;
    outFS.close();
    return 0;
}