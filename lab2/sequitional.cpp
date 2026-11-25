#include <iostream>
using namespace std;

int main() {

    // Array containing 30 elements
    int arr[30] = {
        10, 25, 30, 45, 50,
        15, 20, 35, 40, 55,
        60, 70, 65, 80, 90,
        5, 12, 18, 22, 28,
        33, 38, 42, 48, 52,
        58, 63, 68, 75, 100
    };

    // Number we want to search
    int search;

    // Ask the user for the number to search
    cout << "Enter number to search: ";
    cin >> search;

    // Sequential Search
    for (int i = 0; i < 30; i++) {

        // Compare search value with current array element
        if (arr[i] == search) {

            // Display the position/index
            cout << "Number found at index: " << i << endl;

            // Stop the loop
            return 0;
        }
    }

    // If the number was not found
    cout << "Number not found in the array." << endl;

    return 0;
}