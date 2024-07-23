#include<iostream>
#include<string>
using namespace std;
class reverse {
    int x;
public:
    reverse(int tmp) {
        x=tmp;
    }
    int revv() {
        int rev=0,rem;
        while(x!=0) {
            rem=x%10;
            rev=rev*10 + rem;
            x/=10;
        }
        return rev;
    }
};

int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    reverse r1(n);
    cout<<"Reverse of "<<n<<" = "<<r1.revv()<<endl;
    return 0;
}
