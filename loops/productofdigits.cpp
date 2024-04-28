#include<iostream>
using namespace std;
int main()
{
    int n,d,pro=1;
    cout<<"Enter n : ";
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        pro*=d;
        n=n/10;
    }
    cout<<"Sum of digits : "<<pro;
    return 0;
}