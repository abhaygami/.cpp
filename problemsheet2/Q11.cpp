#include<iostream>
using namespace std;
int main()
{
    int num,sum,tmp,tmpp,rem,p;
    cout<<"Enter Positive integer Number : ";
    cin>>num;
    if(num > 0)
    {
        for(int i = 1 ; i <= num ; i++)
        {
            tmp=i;
            sum=0;
            while(tmp!=0)
            {
            rem=tmp%10;
            tmpp=i;
            p=1;
            while(tmpp!=0)
            {
                p*=rem;
                tmpp/=10;
            }
            sum+=p;
            tmp/=10;
            }
            if(sum == i)
            {
                cout<< i << " ";
            }
        }
    } 
    else 
    {
        cout<<"Enter Valid number.\n";
    }
    return 0;
}