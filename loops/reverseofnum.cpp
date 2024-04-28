#include<iostream>
using namespace std;
int main()
{
    int n,d,nw;
    cout<<"Enter n : ";
    cin>>n;
    nw=n%10;
    n=n/10;
    while(n!=0)
    {
        d=n%10;
        nw=nw*10+d;
        // sum+=d;
        n=n/10;
    }
    cout<<"Reverse of n : "<<nw;
    // cout<<"Sum of digits : "<<sum;
    return 0;
}