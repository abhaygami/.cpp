#include<iostream>
#include<string>
using namespace std;
class myClass {
    int x,y;
public:
    myClass(int a,int b) {
        x = a;
        y=b;
    }
    void swapp() {
        int tmp = x;
        x = y;
        y = tmp;
        cout<<"a = "<<x<<"  b = "<<y<<endl;
    }
};

int main() {
    int a,b;
    cout<<"Enter value of a & b respectively : ";
    cin>>a>>b;
    myClass m1(a,b);
    m1.swapp();
    return 0;
}
