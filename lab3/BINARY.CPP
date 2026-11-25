#include <iostream>          // Include input/output library
using namespace std;         // Use standard namespace

int main() {

    // Create a sorted array of 7 numbers
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};

    // Variable to store the number entered by the user
    int search;

    // Ask the user to enter a number
    cout << "Enter number to search: ";
    cin >> search;           // Take input from user

    // Starting index of the array
    int low = 0;

    // Last index of the array
    int high = 6;

    // Continue searching while low is less than or equal to high
    while (low <= high) {

        // Find the middle index
        int mid = (low + high) / 2;

        // Check if the middle element is the number we want
        if (arr[mid] == search) {

            // Display the index where the number was found
            cout << "Number found at index " << mid << endl;

            // End the program
            return 0;
        }

        // If search number is greater than middle element
        if (search > arr[mid]) {

            // Move low to the right side of middle
            low = mid + 1;
        }

        // If search number is smaller than middle element
        else {

            // Move high to the left side of middle
            high = mid - 1;
        }
    }

    // If the loop finishes, the number was not found
    cout << "Number not found." << endl;

    // End the program successfully
    return 0;
}   