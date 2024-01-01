//Implement a C++ program that simulates a simple ATM machine, allowing users to check their balance, deposit, or withdraw money using a switch statement.
#include <iostream>
using namespace std;

int main() {

    float balance = 50000.0;
    int choice;
    float amount;


    while (true) {
        cout << "\t\t XYZ ATM \t\t" << endl;
        cout << "*****************" << endl;
        cout << "1. Check Balance \t\t 2.Deposit Money\n" << endl;
        cout << "3. Withdraw Money \t\t 4.Exit" << endl;
        cout << "*****************" << endl;
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice) {
            case 1:
                cout << "Your balance is: ₹" << balance << "\n"<<endl;
                break;


            case 2:
                cout << "Enter the amount to deposit: ₹";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposited ₹" << amount << " successfully.\n" << endl;
                } else {
                    cout << "Invalid amount. Please enter a positive amount.\n" << endl;
                }
                break;

            
            case 3:
                cout << "Enter the amount to withdraw: ₹";
                cin >> amount;
                
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawn ₹" << amount << " successfully.\n" << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance.\n" << endl;
                } else {
                    cout << "Invalid amount. Please enter a positive amount.\n" << endl;
                }
                break;

            
            case 4:
                cout << "Exiting the ATM. Have a nice day!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option.\n" << endl;
                break;
        }
    }

    return 0;
}