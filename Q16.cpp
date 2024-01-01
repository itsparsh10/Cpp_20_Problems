// store inventory management system
#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int prod_id;
    string prod_name;
    float price;
    int quantity;

public:
    Product()
    {
    }
    Product(int id, string n, float p, int q)
    {
        prod_id = id;
        prod_name = n;
        price = p;
        quantity = q;
    }
};

int main()
{
    int n, prod_id, quantity;
    string prod_name;
    float price;
    cout << "Enter number of products: ";
    cin >> n;
    Product p[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Product ID: ";
        cin >> prod_id;
        cout << "Enter Product Name: ";
        cin.ignore();
        getline(cin, prod_name);
        cout << "Enter Price of Product: ";
        cin >> price;
        cout << "Enter Quantity of Product: ";
        cin >> quantity;
        p[i] = Product(prod_id, prod_name, price, quantity);
    }
    return 0;
}