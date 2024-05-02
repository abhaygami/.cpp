#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many elements you want to enter in array : ";
    cin>>n;
    int a[n],i,j,tmp;
    cout<<"Enter array elements : ";
    for(i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    // reversing array
    for(i = 0 , j = n-1 ; i < j ; i ++ , j --)
    {
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
    }
    // displaying reversed arrays 
    cout<<"A = ";
    for(i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}