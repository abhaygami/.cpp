#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    c=a;
    int cnt=0;
    while(c>=0)
    {
        c-=b;
        cnt++;
    }
    cout<<a<<" / "<<b<<" = "<<cnt-1<<" & reminder = "<<a%b<<endl;
    return 0;
}