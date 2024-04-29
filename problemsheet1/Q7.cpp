#include<iostream>
using  namespace std;
int main()
{
    float km,m,feet,inch,cm;
    cout<<"Enter the value in kilometers: ";
    cin>>km;
    m=km*1000;
    cm=m*100;
    feet=(float)m*3.28084;
    inch=feet*12;
    cout<<km<<" km = "<<m<<" m = "<<cm<<" cm = "<<feet<<" feet = "<<inch<<" inch ";
    cout<<km<<" km = "<<m<<" m = "<<cm<<" cm = "<<feet<<" feet = "<<inch<<" inch ";
    return 0;
}