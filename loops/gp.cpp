// 3,12,48,..........
#include<iostream>
using namespace std;
int main()
{
    int n,a=3;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        a=a*4;
    }
    return 0;
}