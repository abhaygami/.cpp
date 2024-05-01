#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number you want to check : ";
    cin>>num;
    if(num == 1||num == -1||num == 0)
    {
        cout<<num<<" is neither prime nor composite";
    } 
    else 
    {
        int cnt = 0;
        for(int i = 1 ; i <= num ; i++)
        {
            if(num % i == 0)
            {
                cnt++;
            }
        }
        if(cnt == 2)
        {
            cout<< num <<" is Prime Number.\n";
        } 
        else 
        {
            cout<< num <<" is Not Prime Number.\n";
        }
    }
    return 0;
}