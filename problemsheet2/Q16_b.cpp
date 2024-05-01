// * * * * * * * * * 
// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n : ";
    cin>>n;
    for(i=1;i<=n;i++)
	{
		for(j=1;j<(2*n);j++)
		{
			if(j<=n)
			{
				if(i+j>n+1)
				{
					cout<<"  ";
				}
				else
				{
					cout<<"* ";
				}
			}
			else
			{
				if(j-i+1>=n)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}