/*
A linked list is built in this lab. Make sure to keep track of the head node.

(1) Define the class ContactNode per the following specifications:

Private data members
string contactName
string contactPhoneNumber
ContactNode* nextNodePtr
Constructor with parameters for name followed by phone number (1 pt)
Public member functions
GetName() - Accessor (1 pt)
GetPhoneNumber() - Accessor (1 pt)
InsertAfter() (2 pts)
GetNext() - Accessor (1 pt)
PrintContactNode()
Ex: If the name is Roxanne Hughes and the phone number is 443-555-2864, PrintContactNode() outputs:

Name: Roxanne Hughes
Phone number: 443-555-2864
(2) Define main() to read the name and phone number for three contacts and output each contact. Create three ContactNodes and use the nodes to build a linked list. (2 pts)

Ex: If the input is:

Roxanne Hughes
443-555-2864
Juan Alberto Jr.
410-555-9385
Rachel Phillips
310-555-6610
the output is:

Person 1: Roxanne Hughes, 443-555-2864
Person 2: Juan Alberto Jr., 410-555-9385
Person 3: Rachel Phillips, 310-555-6610
(3) Output the linked list using a loop to output contacts one at a time. (2 pts)

Ex:

CONTACT LIST
Name: Roxanne Hughes
Phone number: 443-555-2864

Name: Juan Alberto Jr.
Phone number: 410-555-9385

Name: Rachel Phillips
Phone number: 310-555-6610
*/

#include <iostream>

using namespace std;

class ContactNode
{
public:
    /* Declare member functions here */
    ContactNode();
    ContactNode(string name, string number);
    string GetName() { return contactName; }
    string GetPhoneNumber() { return contactPhoneNumber; }
    void InsertAfter(ContactNode* nodeLoc);
    ContactNode* GetNext() { return this->nextNodePtr; }
    void PrintContactNode();

private:
    /* Declare data members here */
    string contactName;
    string contactPhoneNumber;
    ContactNode* nextNodePtr;
};

/* Define member functions here */
ContactNode::ContactNode() {
    contactName = "unknown";
    contactPhoneNumber = "unknown";
    nextNodePtr = nullptr;
}

ContactNode::ContactNode(string name, string number) {
    contactName = name;
    contactPhoneNumber = number;
    nextNodePtr = nullptr;
}

void ContactNode::InsertAfter(ContactNode* nodeLoc) {
    ContactNode* tempNext;
    tempNext = this->GetNext();
    this->nextNodePtr = nodeLoc;
    nodeLoc->nextNodePtr = tempNext;
}

void ContactNode::PrintContactNode() {
    cout << "Name: " << this->GetName() << endl;
    cout << "Phone number: " << this->GetPhoneNumber() << endl;
} 

int main()
{
    int numContacts {3};
    string name {}, number {};

    ContactNode* headNode;
    ContactNode* currNode;
    ContactNode* lastNode;

    headNode = new ContactNode();
    lastNode = headNode;

    for (int i = 0; i < numContacts; i++) {
        getline(cin, name);
        getline(cin, number);
        currNode = new ContactNode(name, number);
        lastNode->InsertAfter(currNode);
        lastNode = currNode;
    }

    lastNode = headNode;
    int index {1};
    while (lastNode->GetNext() != nullptr) {
        cout << "Person " << index << ": " << lastNode->GetNext()->GetName() << ", " << lastNode->GetNext()->GetPhoneNumber() << endl;
        lastNode = lastNode->GetNext();
        index++;
    }

    cout << endl;
    lastNode = headNode;
    cout << "CONTACT LIST" << endl;
    while (lastNode->GetNext() != nullptr) {
        lastNode->GetNext()->PrintContactNode();
        cout << endl;
        lastNode = lastNode->GetNext();
    }
    return 0;
}
