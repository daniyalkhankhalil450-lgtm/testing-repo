
#include <iostream>
#include <string>
using namespace std;

// Create Node structure
struct Node {
    string name;
    Node* next;
};

int main() {

    // Create first node
    Node* first = new Node();

    // Store student name
    first->name = "Daniyal";

    // Next node is NULL
    first->next = NULL;

    // Create temporary pointer
    Node* temp = first;

    // Display linked list
    while (temp != NULL) {

        cout << "Name: " << temp->name << endl;

        temp = temp->next;
    }

    delete first;

    return 0;
}
