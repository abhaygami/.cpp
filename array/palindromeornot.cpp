#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many elements you want to enter in array : ";
    cin>>n;
    int a[n],i,j,flag=1;
    cout<<"Enter array elements : ";
    for(i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    // checking palindrome condition
    for(i = 0 , j = n-1 ; i < j ; i ++ , j --)
    {
        if(a[i] != a[j])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"a is palindrome"<<endl;
    }
    else
    {
        cout<<"a is not palindrome"<<endl;
    }
    return 0;
}