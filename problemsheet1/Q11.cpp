#include<iostream>
using namespace std;
int main()
{
    int cy,jy ;
    cout<<"Enter your Joing Year  :";
    cin>>jy;
    cout<<"Enter your Current Year  :";
    cin>>cy;
    if(jy > cy)
    {
        cout<<"InValid Input"<<endl;
    } else
    {
        int yos = cy - jy;
        if(yos > 3)
        {
            cout<<"Your Bonus is : 5000\n";
        } else 
        {
            cout<<"your bonus is : 0\n";
        }
    }
    return 0;
}