#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high) {

    // Last element is pivot
    int pivot = arr[high];

    int i = low - 1;

    // Check all elements before pivot
    for (int j = low; j < high; j++) {

        if (arr[j] <= pivot) {

            i++;

            // Swap elements
            swap(arr[i], arr[j]);
        }
    }

    // Place pivot at correct position
    swap(arr[i + 1], arr[high]);

    return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {

    if (low < high) {

        // Find pivot position
        int pi = partition(arr, low, high);

        // Sort left side
        quickSort(arr, low, pi - 1);

        // Sort right side
        quickSort(arr, pi + 1, high);
    }
}

int main() {

    int arr[100];
    int n;

    cout << "Enter number of product IDs: ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid size!";
        return 0;
    }

    cout << "Enter product IDs:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nOriginal Array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Show first partition
    int pi = partition(arr, 0, n - 1);

    cout << "\nAfter First Partition: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nPivot Position: " << pi;

    // Sort remaining left and right parts
    quickSort(arr, 0, pi - 1);
    quickSort(arr, pi + 1, n - 1);

    cout << "\nFully Sorted Array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
