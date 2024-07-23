#include<iostream>
#include<string>
using namespace std;
class reverse {
    int x;
public:
    reverse(int tmp) {
        x=tmp;
    }
    void display() {
        cout<<"Numbers till "<<x<<" = ";
        for(int i=x;i>0;i--) {
            cout<<i<<" ";
        }
    }
};

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    reverse r1(n);
    r1.display();
    return 0;
}
