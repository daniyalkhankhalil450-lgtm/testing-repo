#include <iostream>
using namespace std;

struct Node {
    int data;       // Stores the value
    Node* next;     // Stores the address of the next node
};

int main() {

    Node* first = new Node();    // Create the first node
    Node* second = new Node();   // Create the second node
    Node* third = new Node();    // Create the third node



    first->data = 10;            // Store 10 in first node
    second->data = 20;           // Store 20 in second node
    third->data = 30;            // Store 30 in third node


    first->next = second;        // Connect first node to second node
    second->next = third;       // Connect second node to third node
    third->next = NULL;         // Last node points to NULL




    Node* temp = first;         // Start from the first node

    while (temp != NULL) {      // Repeat until the end of the list



        cout << temp->data << " ";  // Print current node's data
        temp = temp->next;          // Move to the next node

        
    }

    return 0;                   // End the program
}