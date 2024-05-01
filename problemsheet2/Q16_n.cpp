#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n : ";
    cin>>n;
    for(i=1;i<=n;i++)
	{
		for(j=1;j<2*(n-i+1);j++)
		{
			if(i+j-1<2*n)
            {
                cout<<j<<" ";
            }
            else
            {
                cout<<"  ";
            }
		}
		cout<<endl;
	}
	return 0;
}