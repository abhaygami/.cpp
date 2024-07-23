#include<iostream>
#include<string>
using namespace std;
class numbers {
    int n;
public:
    numbers(int num) {
        n=num;
    }
    void checknum() {
        if(n>0) {
            cout<<n<<" is positive number . "<<endl;
        }
        else if(n<0) {
            cout<<n<<" is negative number . "<<endl;
        }
        else {
            cout<<n<<"is Zero . "<<endl;
        }
    }
};

int main() {
    int n;
    cout<<"Enter n = ";
    cin>>n;
    numbers n1(n);
    n1.checknum();
    return 0;
}