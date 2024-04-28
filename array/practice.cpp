#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=(i+1)*(i+1);
    }
    cout<<"Array elements are : \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}