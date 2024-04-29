#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter Year : ";
    cin>>year;
    if(year < 0 || year > 9999)
    {
        cout<<"Enter Valid year"<<endl;
    } 
    else 
    {
        if(year % 4 == 0)
        {
            cout<<year<<" is Leap Year."<<endl;
        } 
        else 
        {
            cout<<year<<" is Leap not Year."<<endl;
        }
    }
    return 0;
}