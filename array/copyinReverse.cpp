#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many elements you want to enter in array : ";
    cin>>n;
    int a[n],i,j,b[n];
    cout<<"Enter array elements : ";
    for(i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    // assigning value to another array in reverse order
    for(i = 0 , j = n-1 ; i < n , j >= 0 ; i++ , j--)
    {
        b[i]=a[j];
    }
    // displaying both arrays 
    cout<<"A = ";
    for(i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"B = ";
    for(i = 0 ; i < n ; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}