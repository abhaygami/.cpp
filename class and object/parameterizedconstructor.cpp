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
    void display() {
        cout<<"Name : "<<name<<" Subject : "<<sub<<" Salary : "<<salary<<endl;
    }
};
int main() {
    teacher t("Abhay","Maths",20000);          //    making object || calling constructer
    t.display();        //    calling display() function 
    return 0;
}