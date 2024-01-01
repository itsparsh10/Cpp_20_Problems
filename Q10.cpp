//program to create an array of strings and display them in alphabetical order
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter terms of string: ";
    cin>>n;
    string str[n];
    cout<<"Enter "<<n<<" strings: "<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    cout<<endl<<"String: "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<str[i]<<endl;
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if (str[j]>str[j+1])
            {
                string temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    cout<<endl<<"In alphabetical order: "<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<str[i]<<endl;
    }
    return 0;
}