#include<iostream>
#include<string>
using namespace std;
class teacher {
public:
    string name;
    string sub;
    double salary;
    teacher(string n, string s, double sal) {         //parameterized constructor
        name=n;
        sub=s;
        salary=sal;
    }
    teacher(teacher &org) {         //copy constructor
        cout<<"Copieng data "<<endl;
        this->name=org.name;
        this->sub=org.sub;
        this->salary=org.salary;
    }
    void display() {
        cout<<"Name : "<<name<<" Subject : "<<sub<<" Salary : "<<salary<<endl;
    }
};
int main() {
    teacher t1("Abhay","Maths",20000);          //    making object || calling constructer
    cout<<"First teacher : "<<endl;
    t1.display();        //    calling display() function 
    teacher t2(t1);     //innitialising with t1 using copy constructor
    cout<<"Second teacher : "<<endl;
    t2.display();
    return 0;
}