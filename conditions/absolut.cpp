#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    if(n<0)
    {
        cout<<"absolute : "<<-n;
    }
    else
    {
        cout<<"absolute : "<<n;
    }
    return 0;
}