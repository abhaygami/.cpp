#include<iostream>
#include<string>
using namespace std;
class temp {
    float c;
public:
    temp(float c) {
        this->c=c;
    }
    float convert() {
        return ((float)9/5)*c + 32;
    }

};

int main() {
    float tmp;
    cout<<"Enter temprature (in c) = ";
    cin>>tmp;
    temp t1(tmp);
    cout<<tmp<<"^c = "<<t1.convert()<<"^F"<<endl;
    return 0;
}