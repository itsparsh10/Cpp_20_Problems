//program to check whether a given string is a palindrome
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,str1;
    cout<<"Enter a string: ";
    cin>>str;
    str1=str;
    int start=0,end=str.length()-1;
    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    if (str1==str)
    {
        cout<<"String is a palindrome"<<endl;
    }
    else
    {
        cout<<"String is not a palindrome"<<endl;
    }
    return 0;
}