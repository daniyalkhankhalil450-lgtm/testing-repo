#include <iostream>
using namespace std;

// Creating a structure
struct Student {
    string name;
    int age;
    float marks;
};

int main() {

    // Creating a structure variable
    Student s1;

    // Giving values
    s1.name = "Danial";
    s1.age = 20;
    s1.marks = 85.5;

    // Displaying values
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;
    

    return 0;
}