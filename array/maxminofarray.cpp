#include<iostream>
using namespace std;
int main()
{
    int a[5],l,s;
    cout<<"Enter array elements : ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    l=a[0];
    for(int i=1;i<5;i++)
    {
        l=max(l,a[i]);
    }
    s=a[0];
    for(int i=1;i<5;i++)
    {
        s=min(s,a[i]);
    }
    cout<<"MAX = "<<l<<"\tMIN = "<<s;
    return 0;
}