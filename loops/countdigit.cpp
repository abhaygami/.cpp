#include<iostream>
using namespace std;
int main()
{
    int n,cnt=0;
    cout<<"Enter n : ";
    cin>>n;
    while(n!=0)
    {
        cnt++;
        n=n/10;
    }
    cout<<"No of digits : "<<cnt;
    return 0;
}