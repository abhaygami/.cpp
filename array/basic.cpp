#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"Enter array elements : ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Elements of the array are : \n";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}