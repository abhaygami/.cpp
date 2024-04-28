#include<iostream>
using namespace std;
int main()
{
    int dif;
    int cp,sp;
    cout<<"Enter cost price : ";
    cin>>cp;
    cout<<"Enter selling price : ";
    cin>>sp;
    dif= sp - cp ;
    if(dif<0)
    {
        cout<<"seller incurred lost"<<endl<<"lost = "<<-dif;
    }
    else if(dif>0)
    {
        cout<<"Seller made profit "<<endl<<"profit  = "<<dif;
    }
    else
    {
        cout<<"Seller will not made any profit or lose ";
    }
    return 0;
}