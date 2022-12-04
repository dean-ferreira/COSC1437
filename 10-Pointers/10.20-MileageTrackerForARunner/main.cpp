/*
Given the MileageTrackerNode class, complete main() to insert nodes into a linked list (using the InsertAfter() function). The first user-input value is the number of nodes in the linked list. Use the PrintNodeData() function to print the entire linked list. DO NOT print the dummy head node.

Ex. If the input is:

3
2.2
7/2/18
3.2
7/7/18
4.5
7/16/18
the output is:

2.2, 7/2/18
3.2, 7/7/18
4.5, 7/16/18
*/

#include <string>
#include <iostream>

#include "MileageTrackerNode.h"

using namespace std;

int main()
{
    // References for MileageTrackerNode objects
    MileageTrackerNode *headNode;
    MileageTrackerNode *currNode;
    MileageTrackerNode *lastNode;

    double miles;
    string date;
    int i;

    // Front of nodes list
    headNode = new MileageTrackerNode();
    lastNode = headNode;

    // TODO: Read in the number of nodes
    int numTrips{};
    cin >> numTrips;

    // TODO: For the read in number of nodes, read
    //       in data and insert into the linked list
    for (i = 0; i < numTrips; i++)
    {
        cin >> miles;
        cin >> date;
        currNode = new MileageTrackerNode(miles, date);
        lastNode->InsertAfter(currNode);
        lastNode = currNode;
    }


    // TODO: Call the PrintNodeData() method
    //       to print the entire linked list
    lastNode = headNode;
    while (lastNode->GetNext() != nullptr) {
        lastNode->GetNext()->PrintNodeData();
        lastNode = lastNode->GetNext();
    }
    // MileageTrackerNode Destructor deletes all
    //       following nodes
    delete headNode;
}