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
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i<=j)
			{
				cout<<"* ";
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