#include<iostream>
using  namespace std;
int main()
{
    int p,n;
    float r,si;
    cout<<"Enter  Principle Amount: ";
    cin>>p;
    cout<<"\nEnter Number of Periods :";
    cin>>n;
    cout<<"\nEnter Rate of Interest(in percentage) :";
    cin>>r;
    si=(float)(p*r*n)/100;
    cout<<"\nSimple Interest = "<<si;
    return 0;
}