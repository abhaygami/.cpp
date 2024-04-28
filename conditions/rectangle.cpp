#include<iostream>
using namespace std;
int main()
{
    int l,b,a,p;
    cout<<"Enter length : ";
    cin>>l;
    cout<<"Enter breath : ";
    cin>>b;
    a=l*b;
    p=2*(l+b);
    if(a>p)
    {
        cout<<"area of rectangle > perimeter ";
    }
    else if(a<p)
    {
        cout<<"area of rectangle < perimeter";
    }
    else
    {
        cout<<"area  of rectangle = perimeter";
    }
    return 0;
}