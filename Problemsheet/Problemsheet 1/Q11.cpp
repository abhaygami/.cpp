#include<iostream>
#include<string>
using namespace std;
class countv {
    char str[25];
public:
    countv(char x[25]) {
        for(int i=0;x[i]!='\0';i++) {
            str[i]=x[i];
        }
    }
    int countvowel() {
        int cnt=0;
        for(int i=0;str[i] !='\0';i++) {
            if((str[i]=='A')||(str[i]=='a')||(str[i]=='E')||(str[i]=='e')||(str[i]=='I')||(str[i]=='i')||(str[i]=='O')||(str[i]=='o')||(str[i]=='U')||(str[i]=='u')) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    char a[25];
    cout<<"Enter string : ";
    cin>>a;
    countv c1(a);
    cout<<"Vowels in "<<a<<" = "<<c1.countvowel()<<endl;
    return 0;
}
