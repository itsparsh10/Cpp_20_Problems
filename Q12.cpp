//Calculate the sum of elements in each row of a matrix.
#include <iostream>
using namespace std;

int main() {
    int rows, col;
    cout << "Enter row and colum number: " << endl;
    cin >> rows >> col;

    //creating a 2d array and entering elements in it
    int arr[rows][col];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            cout << "Enter value of arr["<< i <<"]["<< j << "]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    //adding elements of each row in the sum variable
    int sum=0;
    for(int i=0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            sum+=arr[i][j];
        }
        cout <<"Sum of row " <<i << " is:"<<sum << endl;
        sum=0;
    }
}