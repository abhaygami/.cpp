#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    float per;
    cout<<"Enter the marks of five subjects: ";
    cin>>a>>b>>c>>d>>e;
    if(a<0||a>100||b<0||b>100||c<0||c>100||d<0||d>100||e<0||e>100)
    {
        cout<<"Enter valid marks";
        return 0;
    }
    per=(float)(a+b+c+d+e)/5;
    if(per>=60)
    {
        cout<<"percentage : "<<per<<" & class : First class";
    }
    else if(per>=50&&per<=59)
    {
        cout<<"percentage : "<<per<<" & class : Second class";
    }
    else if(per>=40&&per<=49)
    {
        cout<<"percentage : "<<per<<" & class : Third class";
    }
    else
    {
        cout<<"percentage : "<<per<<" & class : Fail";
    }
    return 0;
}