// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1
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
			if(i>=j)
			{
				if(j%2==0)
				{
					cout<<"0 ";
				}
				else
				{
					cout<<"1 ";
				}
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