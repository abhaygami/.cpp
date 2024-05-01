//         1
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n : ";
    cin>>n;
    for(i=1;i<=n;i++)
	{
		for(j=1;j<2*n;j++)
		{
			if(i+j>n && j-i<n)
            {
                cout<<i+j-n<<" ";
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