
#include <iostream>
using namespace std;

// Maximum size of the queue
const int SIZE = 7;

// Create Queue structure
struct myQueue {

private:
    int Queue[SIZE];  // Array to store elements
    int head = 0;     // Points to first element
    int tail = 0;     // Points to next empty position

public:

    // Check if queue is empty
    bool isEmpty() {
        return head == tail;
    }

    // Check if queue is full
    bool isFull() {
        return tail == SIZE;
    }

    // Insert an element at the tail
    bool EnQueue(int value) {

        // If queue is full, insertion is not possible
        if (isFull())
            return false;

        // Insert value and increase tail
        Queue[tail++] = value;

        return true;  // Insertion successful
    }

    // Remove the oldest element from the head
    int DeQueue() {

        // If queue is empty, deletion is not possible
        if (isEmpty())
            return -1;

        // Return element and increase head
        return Queue[head++];
    }

    // Display all queue elements
    void display() {

        // Print elements from head to tail
        for (int i = head; i < tail; i++) {
            cout << Queue[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    myQueue q;  // Create queue object

    // Insert four elements
    q.EnQueue(10);
    q.EnQueue(20);
    q.EnQueue(30);
    q.EnQueue(40);

    // Display queue
    cout << "Queue: ";
    q.display();

    // Remove first element
    cout << "Removed: " << q.DeQueue() << endl;

    // Display queue after deletion
    cout << "After DeQueue: ";
    q.display();

    return 0;  // End program
}
 