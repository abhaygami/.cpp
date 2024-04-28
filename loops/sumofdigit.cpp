#include<iostream>
using namespace std;
int main()
{
    int n,d,sum=0;
    cout<<"Enter n : ";
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    cout<<"Sum of digits : "<<sum;
    return 0;
}