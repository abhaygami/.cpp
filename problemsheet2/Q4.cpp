#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Positive Number : ";
    cin>>num;
    if(num > 0)
    {
        int fact = 1;
        for(int i = 1 ; i < num ; i++)
        {
            if(num % i == 0)
            {
                cout<< i <<"\t";
            }
        }
        
    } 
    else 
    {
        cout<<"Enter Valid Positive number number.\n";
    }
}