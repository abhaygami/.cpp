#include<iostream>
#include<string>
using namespace std;
class swpparr {
    int n;
    int *a;
public:
    swpparr(int size) {
        n=size;
        a=new int[n];
        cout<<"Enter array elements = ";
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
    }
    void swap() {
        int tmp = a[0];
        a[0] = a[n-1];
        a[n-1] = tmp;
        cout<<"Sorted array = ";
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        
    }
};

int main() {
    int size;
    cout<<"Enter size of array = ";
    cin>>size;
    swpparr s1(size);
    s1.swap();
    return 0;
}
