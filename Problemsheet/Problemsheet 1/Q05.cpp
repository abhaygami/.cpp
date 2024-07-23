#include<iostream>
#include<string>
using namespace std;
class ascii {
    char c;
public:
    ascii(char ch) {
        c=ch;
    }
    int getas() {
        return c;
    }
};

int main() {
    char ch;
    cout<<"Enter the character =  ";
    cin>>ch;
    ascii a1(ch);
    cout<<"ASCII value of "<<ch<<" = "<<a1.getas()<<endl;
    return 0;
}