#include<iostream>
using namespace std;
int main()
{
    int n,a[10],i,cnt=0;
    cout<<"Enter array elements  : ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter number : ";
    cin>>n;
    for(i=0;i<10;i++)
    {
        if(a[i]>n)
        {
            cnt++;
        }
    }
    cout<<"Total elements  greater than "<<n<<" are : "<<cnt;
    return 0;
}