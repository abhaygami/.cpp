// 1 2 3 4 5 
//   2 3 4 5
//     3 4 5
//       4 5
//         5
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