//         * 
//       * *
//     * * *
//   * * * *
// * * * * *
//   * * * *
//     * * *
//       * *
//         *
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n : ";
    cin>>n;
    for(i=1;i<(2*n);i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i<=n)
			{
				if(i+j>=n+1)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else
			{
				if(i-j<n)
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