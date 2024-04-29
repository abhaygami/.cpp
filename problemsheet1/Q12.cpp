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
        if(wt<=48)
        {
            cout<<"Payment = "<<wt*50.0;
        }
        else
        {
            ot=wt-48;
            if(ot>0&&ot<=5)
            {
                cout<<"Payment = "<<(wt*50.0)+(ot*70.0);
            }
            else if(ot>5&&ot<=10)
            {
                cout<<"Payment = "<<(wt*50.0)+(ot*85.0);
            }
            else
            {
                cout<<"Payment = "<<(wt*50.0)+(ot*120.0);
            }
        }
    }
    return 0;
}