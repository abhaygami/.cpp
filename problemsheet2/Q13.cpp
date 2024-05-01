#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Positive integer Number : ";
    cin>>num;
    if(num > 0)
    {
        int sum = 0;
        for(int i = 1 ; i <= num ; i++)
        {
            if(i % 2 != 0)
            {
                sum += i;
            }
        }
        cout<<"Sum = "<< sum;
    } 
    else 
    {
        cout<<"Enter Valid number.\n";
    }
}