#include<iostream>
#include<string>
using namespace std;
class icecream {

public:
    string flavour;
    int scoops;

    void setdata(string f,int s) {
        flavour = f;
        scoops = s;
    }

    void getdata() {
        cout<<"Flavour = "<<flavour<<"\tScoops = "<<scoops<<endl;
    }
};

int main() {
    icecream ic;
    ic.setdata("Vanila",2);
    ic.getdata();

    icecream *ptric = &ic;  //pointer to object
    ptric->flavour = "Strawberry";
    ptric->getdata();
    return 0;
}