#include <iostream>
using namespace std;

// Create a Node
struct Node {
    int rollNo;       // Stores student roll number
    string name;      // Stores student name
    Node* next;       // Stores address of next node
};

int main() {

    // Create three nodes
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* four = new Node();


    // Store data in first node
    first->rollNo = 101;
    first->name = "Ali";

    // Store data in second node
    second->rollNo = 102;
    second->name = "Zubair";


    // Store data in third node
    third->rollNo = 103;
    third->name = "Danial";


    four->rollNo = 104;
    four->name = "Ahmad";


    // Connect first node to second node
    first->next = second;

    // Connect second node to third node
    second->next = third;

    // Third node is the last node
    third->next = four;

    four->next =  NULL;

    // Start from the first node
    Node* temp = first;

    // Traverse the linked list
    while (temp != NULL) {

        cout << "Roll No: " << temp->rollNo << endl;  // Display roll number
        cout << "Name: " << temp->name << endl;      // Display name
        cout << endl;

        temp = temp->next;  // Move to the next node
    }

    return 0;
}