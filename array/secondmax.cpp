#include<iostream>
using namespace std;
int main()
{
    int a[5],l,sl;
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
    sl=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]!=l)
        {
            sl=max(sl,a[i]);
        }
    }
    cout<<"MAX = "<<l<<"\tSECMAX = "<<sl;
    return 0;
}
