#include<iostream>
using namespace std;
int main()
{
    int jy,cy,yos;
    cout<<"Enter joining year : ";
    cin>>jy;
    cout<<"Enter current year : ";
    cin>>cy;
    if(cy<jy)
    {
        cout<<"Enter valid details ";
        return 0;
    }
    yos=cy-jy;
    if(yos>=7)
    {
        cout<<"Bonus = 5000";
    }
    else if(yos>=4&&yos<=6)
    {
        cout<<"Bonus = 3000";
    }
    else if(yos>=1&&yos<=3)
    {
        cout<<"Bonus = 1000";
    }
    else
    {
        cout<<"No Bonus ";
    }
    return 0;
}