#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int sum = 0;
    while(num!=0)
    {
        int x = num % 10;
        if(x % 2 != 0)
        {
            sum += x;
        }
        num = num / 10;
    }
    cout<<"SUM of odd digit is : "<<sum;
    
}