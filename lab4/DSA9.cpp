
#include <iostream>
using namespace std;

// Create a Node
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Create Queue
class Queue {
public:
    Node* head;
    Node* tail;

    Queue() {
        head = NULL;
        tail = NULL;
    }

    // Insert patient
    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Display first patient
    int front() {
        return head->data;
    }

    // Display last patient
    int back() {
        return tail->data;
    }

    // Remove first patient
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;

        if (head == NULL) {
            tail = NULL;
        }
    }

    // Check empty queue
    bool isEmpty() {
        return head == NULL;
    }

    // Display patients
    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    cout << "Name: Daniyal Khan" << endl;
    cout << "Section: C" << endl;

    Queue q;
    int n, token;

    cout << "\nEnter number of patients: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter patient token: ";
        cin >> token;
        q.enqueue(token);
    }

    if (!q.isEmpty()) {
        cout << "\nNext patient: " << q.front() << endl;
        cout << "Last registered patient: "
             << q.back() << endl;

        cout << "Serving patient: " << q.front() << endl;
        q.dequeue();

        cout << "Waiting patients: ";
        q.display();
    }
    else {
        cout << "No patients registered!" << endl;
    }

    return 0;
}
