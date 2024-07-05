#include<iostream>
using namespace std;
class student {
public:
    string name;
    float *cgpaptr;
    student(string name,float cgpa) {
        this->name=name;
        cgpaptr=new float;      //dynamic memory allocation (new == malloc||calloc)
        *cgpaptr=cgpa;
    }
    void display() {
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<*cgpaptr<<endl;
    }
};
int main() {
    student s1("Abhay Gami ",7.50);
    cout<<"displaying details before updating : "<<endl;
    s1.display();       //displaying details before updating
    student s2(s1);     //doing shallow copy
    *(s2.cgpaptr)=7.0;
    cout<<"Displaying Details after updating s2 : "<<endl;
    s2.display();       //displaying details after updating
    return 0;
}