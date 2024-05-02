#include<iostream>
using namespace std;
int main()
{
    int a[5],s,ss;
    cout<<"Enter array elements : ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    s=INT32_MAX;
    for(int i=1;i<5;i++)
    {
        s=min(s,a[i]);
    }
    ss=INT32_MAX;
    for(int i=0;i<5;i++)
    {
        if(a[i]!=s)
        {
            ss=min(ss,a[i]);
        }
    }
    cout<<"MIN = "<<s<<"\tSECMIN = "<<ss;
    return 0;
}
