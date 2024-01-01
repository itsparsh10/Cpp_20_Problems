// program to simulate a simple calculator
#include <iostream>
using namespace std;

class Calculator
{
private:
    int a;
    float b, c;

public:
    void calculate()
    {
        while (true)
        {
            cout << "Enter first number: ";
            cin >> b;
            cout << "Enter second number: ";
            cin >> c;
            cout << "Calculator: " << endl
                 << "Press " << endl
                 << "1 for Addition" << endl
                 << "2 for Subtraction" << endl
                 << "3 for Multiplication" << endl
                 << "4 for Division" << endl
                 << "0 to end" << endl;
            cin >> a;
            switch (a)
            {
            case 1:
                addition(b, c);
                break;
            case 2:
                subtraction(b, c);
                break;
            case 3:
                multiplication(b, c);
                break;
            case 4:
                division(b, c);
                break;
            case 0:
                return;
            default:
                cout << "Invalid choice! Please enter a valid choice" << endl;
            }
        }
    }
    void addition(float x, float y)
    {
        cout << "Addition: " << x + y << endl;
    }
    void subtraction(float x, float y)
    {
        cout << "Subtraction: " << x - y << endl;
    }
    void multiplication(float x, float y)
    {
        cout << "Multiplication: " << x * y << endl;
    }
    float division(float x, float y)
    {
        if (x == 0 || y == 0)
        {
            cout << "Invalid number" << endl;
            return 0;
        }
        else
        {
            cout << "Division: " << x / y << endl;
            return 0;
        }
    }
};

int main()
{
    Calculator obj;
    obj.calculate();
    return 0;
}