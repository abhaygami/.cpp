#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter values of a,b,c respectively : ";
    cin>>a>>b>>c;
    if((a>b)&&(a>c))
    {
        cout<<a;
    }
    else if(b>a && b > c)
    {
        cout<<b;
    }
    else if(c>a && c > b)
    {
        cout<<c;
    }
    else if(a==b && b>c)
    {
        cout<<a<<","<<b;
    }
    else if(a==c && c>b)
    {
        cout<<a<<","<<c;
    }
    else if(b==c && b>a)
    {
        cout<<b<<","<<c;
    }
    else
    {
        cout<<a<<"="<<b<<"="<<c;
    }
    return 0;
}