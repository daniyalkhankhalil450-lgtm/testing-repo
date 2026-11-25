#include <iostream>              // Includes the input/output library
using namespace std;             // Allows us to use cout and cin without std::

int main() {                     // Main function: program starts here

    // Create a 2D array with 3 rows and 3 columns
    int arr[3][3];

    // Outer loop controls the rows
    for (int i = 0; i < 3; i++) {

        // Inner loop controls the columns
        for (int j = 0; j < 3; j++) {

            // Ask the user to enter a value
            // i = row number and j = column number
            cout << "Enter value for [" << i << "][" << j << "]: ";

            // Take the value from the user
            // and store it in the array
            cin >> arr[i][j];
        }
    }

    // Print a heading before displaying the array
    cout << "\nYour 3x3 array is:\n";

    // Outer loop goes through each row
    for (int i = 0; i < 3; i++) {

        // Inner loop goes through each column
        for (int j = 0; j < 3; j++) {

            // Print the value stored at row i and column j
            cout << arr[i][j] << " ";
        }

        // Move to the next line after printing one complete row
        cout << endl;
    }

    // End the program successfully
    return 0;
}