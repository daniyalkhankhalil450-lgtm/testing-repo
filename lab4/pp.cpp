#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int target;
    int found = -1;

    // Take array elements from the user
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Take the number to search
    cout << "Enter the number to search: ";
    cin >> target;

    // Search for the number
    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            found = i;
            break;
        }
    }

    // Display the result
    if (found != -1) {
        cout << "Number found at index: " << found << endl;
    } else {
        cout << "Number not found!" << endl;
    }

    return 0;
}