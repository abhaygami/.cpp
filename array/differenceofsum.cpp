#include<iostream>
using namespace std;
int main()
{
    int a[10],se=0,so=0,i,diff;
    cout<<"Enter 5 elements of array: ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        if(i%2==0)
        {
            se+=a[i];
        }
        else
        {
            so+=a[i];
        }
    }
    diff = abs(se-so);
    cout<<"Difference : "<<diff;
    return 0;
}