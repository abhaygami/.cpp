#include<iostream>
#include<string>
using namespace std;
class fact {
    int x;
public:
    fact(int x) {
        this->x = x;
    }
    int factorial() {
        int f=1;
        for(int i=1;i<=x;i++) {
            f*=i;
        }
        return f;
    }
};

int main() {
    int a;
    cout<<"Enter a : ";
    cin>>a;
    if(a > 10 || a < 0) {
        cout<<"Enter valid amount . ";
        return 0;
    }
    fact f1(a);
    cout<<a<<"! = "<<f1.factorial()<<endl;
    return 0;
}
