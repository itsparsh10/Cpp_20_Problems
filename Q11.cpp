//program to check if an array is sorted in ascending order
#include<iostream>
using namespace std;
int main()
{
    int n;bool sorted = true;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: "<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array: |";
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"|"<<endl;
    for (int i=0; i<n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            sorted = false;
            break;
        }
    }
    if (sorted == true)
    {
        cout<<"Array is sorted in ascending order"<<endl;
    }
    else
    {
        cout<<"Array is not sorted in ascending order"<<endl;
    }
    return 0;
}