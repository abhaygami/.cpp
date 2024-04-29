#include<iostream>
using namespace std;
int main()
{
    float wt,ot;
    cout<<"Enter working time : ";
    cin>>wt;
    if(wt<=0||wt>168)
    {
        cout<<"Enter valid details ";
    }
    else
    {
        if(wt<=40)
        {
            cout<<"Payment = "<<wt*2.5;
        }
        else
        {
            ot=wt-40;
            if(ot>0&&ot<=5)
            {
                cout<<"Payment = "<<(wt*2.5)+(ot*7);
            }
            else if(ot>5&&ot<=10)
            {
                cout<<"Payment = "<<(wt*2.5)+(ot*8.5);
            }
            else
            {
                cout<<"Payment = "<<(wt*2.5)+(ot*12);
            }
        }
    }
    return 0;
}