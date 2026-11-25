#include<iostream>
using namespace std;

int main() {

    int arr1[3] = {10, 20, 30};
    int arr2[3] = {40, 50, 60};

    int arr3[6];

    // Copy first array
    for(int i = 0; i < 3; i++) {
        arr3[i] = arr1[i];
    }

    // Copy second array
    for(int i = 0; i < 3; i++) {
        arr3[i + 3] = arr2[i];
    }

    // Print merged array
    for(int i = 0; i < 6; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}