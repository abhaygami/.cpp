#include <iostream>
using namespace std;
int main()
{
    int d, m, y;
    cout << "Enter date (dd/mm/yyyy): ";
    cin >> d >> m >> y;
    if(y<0||y>9999||m<1||m>12||d<0) 
    {
        cout<<d<<"/"<<m<<"/"<<y<<"->InValid";
    }
    else
    {
        if((m==1||m==3||m==5|m==7||m==8||m==10||m==12)&&(d>31))
        {
            cout<<d<<"/"<<m<<"/"<<y<<"->InValid";
        }

        else if((m==4||m==6||m==9||m==11)&&(d>30))
        {
            cout<<d<<"/"<<m<<"/"<<y<<"->InValid";
        }

        else if((y%4==0)&&(m==2)&&(d>29))
        {
            cout<<d<<"/"<<m<<"/"<<y<<"->InValid";
        }

        else if((y%4!=0)&&(m==2)&&(d>28))
        {
            cout<<d<<"/"<<m<<"/"<<y<<"->InValid";
        }

        else
        {
            cout<<d<<"/"<<m<<"/"<<y<<"->Valid";
        }
    }
    return 0;
}