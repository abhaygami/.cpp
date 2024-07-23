#include<iostream>
#include<string>
using namespace std;
class rectangle {
    int l,b;
public:
    void getdata() {
        cout<<"Enter length and breath of rectangle : ";
        cin>>l>>b;
    }
    int area() {
        return l*b;
    }
    int perimeter() {
        return 2*(l+b);
    }

};

int main() {
    rectangle r1;
    r1.getdata();
    cout<<"Area of rectangle = "<<r1.area()<<endl;
    cout<<"Perimeter of rectangle = "<<r1.perimeter()<<endl;
    return 0;
}