#include<iostream>
#include<string>
using namespace std;
class division {
    int a,b;
public:
    division(int x,int y) {
        a=x;
        b=y;
    }
    int quo() {
        return a/b;
    }
    int rem() {
        return a%b;
    }
};

int main() {
    int n1,n2;
    cout<<"Enter two numbers n1,n2 (for n1/n2) : ";
    cin>>n1>>n2;
    division d1(n1,n2);
    cout<<"Quotient = "<<d1.quo()<<endl;
    cout<<"Reminder = "<<d1.rem()<<endl;
    return 0;
}