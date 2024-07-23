#include<iostream>
#include<string>
using namespace std;
class primes {
    int x,sum=0;
public:
    primes(int tmp) {
        x=tmp;
    }
    int isPrime(int num) {
        if(num==2) {
            return 1;
        }
        else {
            for(int i=2;i<num;i++) {
                if(num%i==0) {
                    return 0;
                }
            }
            return 1;
        }
    }
    int summ() {
        sum=0;
        for(int i=2;i<=200;i++) {
            if(x!=0) {
                if(isPrime(i)) {
                    sum+=i;
                    x--;
                }
            }
        }
        return sum;
    }
};

int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    primes p1(n);
    cout<<"Sum of "<<n<<" prime numbers = "<<p1.summ()<<endl;
    return 0;
}
