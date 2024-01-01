//program to find the sum of digits of a number until it becomes a single-digit number
#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"Enter a number: ";
    cin>>n;
    while (n>=10)
    {
        int sum=0;
        while(n>0)
        {
            r=n%10;
            sum+=r;
            n/=10;
        }
        n=sum;
    }
    cout<<"Sum of digits: "<<n<<endl;
    return 0;
}