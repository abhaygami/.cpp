#include<iostream>
using namespace std;
int main()
{
    int f,n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            f=i;
        }
    }
    cout<<"Largest factor of given number is "<<f;
    return 0;
}