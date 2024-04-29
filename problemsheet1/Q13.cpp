#include<iostream>
using namespace std;
int main()
{
    float amount;
    cout<<"Enter Amount : ";
    cin>>amount;
    if(amount <= 0)
    {
        cout<<"Enter valid amount"<<endl;
    } 
    else 
    {
        if(amount >= 100000)
        {
            cout<<"Interest is : " << (amount * 0.12);
        } 
        else if (amount >= 60000 && amount < 100000)
        {
            cout<<"Interest is : " << (amount * 0.10);    
        } 
        else if (amount >= 30000 && amount < 60000){
            cout<<"Interest is : " << (amount * 0.08);    
        } 
        else 
        {
            cout<<"Interest is : " << (amount * 0.072);    
        }
    }
    return 0;
}