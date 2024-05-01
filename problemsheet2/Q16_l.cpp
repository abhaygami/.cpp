// 1 2 3 4 5 
// 5 4 3 2 1
// 1 2 3 4 5
// 5 4 3 2 1
// 1 2 3 4 5
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter n : ";
    cin>>n;
    for(i=1;i<=n;i++)
	{
		for(j=1,k=n;j<=n,k>=1;j++,k--)
		{
			if(i%2!=0)
            {
                cout<<j<<" ";
            }
            else
            {
                cout<<k<<" ";
            }
		}
		cout<<endl;
	}
	return 0;
}