#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter values of a,b,and c : ";
    cin>>a>>b>>c;
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        cout<<"\nThe entered sides form an equilateral triangle.";
    }
    else
    {
        cout<<"The sides can't be consider in a triangle ";
    }
    return 0;
}