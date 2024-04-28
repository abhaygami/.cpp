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
    // updating elements
    for(int i=0;i<5;i++)
    {
        if(i%2==0)
        {
            a[i]+=10;
        }
        else
        {
            a[i]*=2;
        }
    }
    cout<<"\nUpdated Array Elements are : \n";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}