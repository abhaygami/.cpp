#include<iostream>
#include<string>
using namespace std;
class teacher {
public:
    teacher() {         //Non-parameterized constructor
        salary=25000;   //by default giving value to salary it will assumed when constructor called
        cout<<"->Hello , I m constructor ."<<endl;
    }
    string name;
    string sub;
    double salary;
    void display() {
        cout<<"Name : "<<name<<" Subject : "<<sub<<" Salary : "<<salary<<endl;
    }
};
int main() {
    teacher t;          //    making object || calling constructer
    t.name="Abhay";
    t.sub="Maths";
    t.display();        //    calling display() function 
    return 0;
}