//Implement a program that determines the grade of a student based on their marks.

#include <iostream>
using namespace std;

int main() {
    float marks;
    cout << "Enter your marks: ";
    cin >> marks; 
    if (marks >= 90) {
        cout << "A";
    } else if (marks >= 80) {
        cout << "B";
    } else if (marks >= 70) {
        cout << "C";
    } else if (marks >= 60) {
        cout << "D";
    } else {
        cout << "F";
    }
    return 0;
}