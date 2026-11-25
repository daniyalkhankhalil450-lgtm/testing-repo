#include <iostream>
using namespace std;

int main() {

    // Create an array of 5 numbers
    int arr[10] = {10, 20, 30, 40, 50,60,70,80,90,100};

    // Variable to store the number we want to search
    int search;

    // Ask the user to enter a number
    cout << "Enter number to search: ";
    cin >> search;

    // Loop through the array one by one
    for (int i = 0; i < 10; i++) {

        // Check if the current array element matches the search number
        if (arr[i] == search) {

            // Display the index where the number is found
            cout << "Number found at index " << i;

            // Stop the program because the number is found
            return 0;
        }
    }

    // If the loop finishes, the number was not found
    cout << "Number not found";

    return 0;
}