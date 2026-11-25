#include <iostream>
using namespace std;

int q[5];
int head = 0, tail = 0;

void EnQueue(int value)
{
    if (tail == 5)
    {
        cout << "Queue is Full\n";
    }
    else
    {
        q[tail] = value;
        tail++;
    }
}

void DeQueue()
{
    if (head == tail)
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        cout << "Removed: " << q[head] << endl;
        head++;
    }
}

void display()
{
    for (int i = head; i < tail; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main()
{
    EnQueue(80);
    EnQueue(90);
    EnQueue(50);

    cout << "Queue: ";
    display();

    DeQueue();

    cout << "After DeQueue: ";
    display();

    return 0;
}