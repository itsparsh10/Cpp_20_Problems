// rectangular star pattern
#include <iostream>
using namespace std;

int main() {


    int num;
    cout << "Enter the number of the lines: ";
    cin >> num;

    cout << endl << "The pattern with " << num << " rows is" << endl << endl ;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (i == 0 || i == num - 1 || j == 0 || j == num - 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}