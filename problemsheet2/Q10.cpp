#include<iostream>
using namespace std;
int main()
{
    int num,cnt;
    cout<<"Enter Positive integer Number : ";
    cin>>num;
    if(num > 0)
    {
        for(int i = 1 ; i <= num ; i++)
        {
            cnt = 0;
            for(int j = 1 ; j <= i ; j++)
            {
                if(i % j == 0)
                {
                    cnt++;
                }
            }
            if(cnt == 2)
            {
                cout<< i << "  ";
            }
        }
    } 
    else 
    {
        cout<<"Enter Valid number.\n";
    }
}