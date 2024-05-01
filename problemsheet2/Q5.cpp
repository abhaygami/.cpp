#include<iostream>
using namespace std;
int main()
{
    int n,tmp,tmpp,sum=0,rem,p;
    cout<<"Enter number you want to check : ";
    cin>>n;
    tmp=n;
    while(tmp!=0)
    {
        rem=tmp%10;
        tmpp=n;
        p=1;
        while(tmpp!=0)
        {
            p*=rem;
            tmpp/=10;
        }
        sum+=p;
        tmp/=10;
    }
    if (sum==n)
    {
        cout<<n<<" is an Arm-strong Number."<<endl;
    }
    else
    {
        cout<<n<<" is not an Arm-strong Number."<<endl;
    }
    return 0;
}