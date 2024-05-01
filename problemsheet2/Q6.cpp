#include<iostream>
using namespace std;
int main()
{
    int num , dum , cnt = 0;
    cout<<"Enter Number : ";
    cin>>num;
    while(num!=0)
    {
        num/=10;
        cnt++;
    }
    cout<<"No. of digits = "<<cnt;
    return 0;
}