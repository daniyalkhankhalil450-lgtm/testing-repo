
#include <iostream>
using namespace std;

int main() {

    int *p = new int(10);

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {

        cout << "Enter value for index [" << i << "]: ";
        cin >> arr[i];
    }

    cout << "\nArray elements are:\n";

    for (int i = 0; i < n; i++) {

        cout << arr[i] << endl;
    }

    delete[] arr;
    delete p;

    return 0;
}
