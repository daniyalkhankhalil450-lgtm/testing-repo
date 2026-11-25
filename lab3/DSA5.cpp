#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr};

    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    head->next->next->next = new Node{40, nullptr};

    Node* temp = head;

    int count = 0;
    int sum = 0;

    cout << "List: ";

    while (temp != nullptr) {
        cout << temp->data << " ";

        sum += temp->data;
        count++;

        temp = temp->next;
    }

    cout << endl;
    cout << "Count = " << count << endl;
    cout << "Sum = " << sum << endl;

    // Delete all nodes
    temp = head;

    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    head = nullptr;

    return 0;
}