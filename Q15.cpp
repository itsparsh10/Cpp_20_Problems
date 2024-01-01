// pyramid number pattern
#include <iostream>
using namespace std;


int main() {
    
    int num;
    cout << "Enter the number of lines: ";
    cin >> num;

 
    cout << endl << "The pattern with " << num << " rows is" << endl << endl ;

    for (int i = 1; i <= num; i++) {
        
        for (int j = 1; j <= num - i; j++) {
            cout << " ";
        }

        for (int k = i; k <= 2 * i - 1; k++) {
            cout << k;
        }

        for (int l = 2 * i - 2; l >= i; l--) {
            cout << l;
        }

        cout << endl;
    }

    for (int i = num - 1; i >= 1; i--) {

        for (int j = 1; j <= num - i; j++) {
            cout << " ";
        }

        for (int k = i; k <= 2 * i - 1; k++) {
            cout << k;
        }

        for (int l = 2 * i - 2; l >= i; l--) {
            cout << l;
        }

        cout << endl;
    }

    return 0;
}
