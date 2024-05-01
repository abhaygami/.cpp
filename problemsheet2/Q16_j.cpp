// 5 4 3 2 1 
//   5 4 3 2
//     5 4 3
//       5 4
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
                cout<<n-j+i<<" ";
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