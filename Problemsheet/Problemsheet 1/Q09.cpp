#include<iostream>
#include<string>
using namespace std;
class summ {
public:
    void total() {
        int sum=0;
        for(int i=1;i<=10;i++) {
            sum+=i;
        }
        cout<<"Sum of 10 Natural numbers = "<<sum<<endl;
    }
};

int main() {
    summ s1;
    s1.total();
    return 0;
}
