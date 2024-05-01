// 5 4 3 2 1 
//   4 3 2 1
//     3 2 1
//       2 1
//         1
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
                cout<<n-j+1<<" ";
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