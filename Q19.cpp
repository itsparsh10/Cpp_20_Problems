// online shop simulator
#include <iostream>
using namespace std;

class Product
{
private:
    string name, prod[5];
    float prices[5], sum = 0;
    int quantity, quan[5], n;

public:
    Product()
    {
        cout << "Enter number of products: ";
        cin >> n;
        prod[n];
        prices[n];
        quan[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter name of product: ";
            cin.ignore();
            getline(cin, name);
            prod[i] = name;
            cout << "Enter cost: ";
            cin >> prices[i];
            // prices[i]=price;
            cout << "Enter quantity: ";
            cin >> quantity;
            quan[i] = quantity;
            sum += (prices[i] * quan[i]);
        }
    }
    void cart()
    {
        cout << "Cart: " << endl
             << "Product Name"
             << "\t"
             << "Price"
             << "\t"
             << "Quantity"
             << "\t" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << prod[i] << "\t\t" << prices[i] << "\t" << quan[i] << endl;
        }
        cout << "Total cost: " << sum << endl;
    }
};

int main()
{
    Product p1;
    p1.cart();
    return 0;
}