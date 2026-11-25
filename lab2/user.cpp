#include <iostream>
using namespace std;

int main() {

    // Create an array that can store 30 integers
    int arr[30];

    // Variable to store the number we want to search
    int search;

    // Variable to check whether the number is found
    bool found = false;

    // Input 30 elements from the user
    cout << "Enter 30 elements:\n";

    for (int i = 0; i < 30; i++) {

        // Ask the user to enter a value
        cout << "Enter element " << i + 1 << ": ";

        // Store the value in the array
        cin >> arr[i];
    }

    // Ask the user which number they want to search
    cout << "\nEnter number to search: ";
    cin >> search;

    // Sequential / Linear Search
    // Check each element one by one
    for (int i = 0; i < 30; i++) {

        // Compare the current element with search value
        if (arr[i] == search) {

            // Number has been found
            cout << "Number found at index " << i << endl;

            // Change found to true
            found = true;

            // Stop searching
            break;
        }
    }

    // If the number was not found
    if (found == false) {
        cout << "Number not found in the array." << endl;
    }

    // End the program
    return 0;
}