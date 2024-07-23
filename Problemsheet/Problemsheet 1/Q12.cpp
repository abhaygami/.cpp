#include<iostream>
#include<string>
using namespace std;
class sumavg {
    int n,sum=0;
    int *a;
public:
    sumavg(int size) {
        n=size;
        a=new int[n];
        cout<<"Enter array elements = ";
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
    }
    int summ() {
        for(int i=0;i<n;i++) {
            sum+=a[i];
        }
        return sum;
    }
    int avg() {
        return sum/n;
    }
};

int main() {
    int size;
    cout<<"Enter size of array = ";
    cin>>size;
    sumavg t1(size); 
    cout<<"Sum = "<<t1.summ()<<endl;
    cout<<"Avg = "<<t1.avg()<<endl;
    return 0;
}
