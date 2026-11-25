#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int searchMark;
    bool found = false;

    cout << "Enter marks of 5 students: ";

    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    cout << "Enter mark to search: ";
    cin >> searchMark;

    for (int i = 0; i < 5; i++) {
        if (marks[i] == searchMark) {
            cout << "Mark found at index " << i;
            found = true;
            break;
        }
    }

    if (found == false) {
        cout << "Mark not found!";
    }

    return 0;
}
