// 1 2 3 4 5 4 3 2 1 
//   1 2 3 4 3 2 1
//     1 2 3 2 1
//       1 2 1
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
		for(j=1;j<2*n;j++)
		{
			if(j<=n)
            {
                if(i<=j)
                {
                    cout<<j-i+1<<" ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            else
            {
                if(i+j>2*n)
                {
                    cout<<"  ";
                }
                else
                {
                    cout<<2*n-j+1-i<<" ";
                }
            }
		}
		cout<<endl;
	}
	return 0;
}