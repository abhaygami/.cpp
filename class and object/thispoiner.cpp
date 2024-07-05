#include<iostream>
#include<string>
using namespace std;
class teacher {
public:
    string name;
    string sub;
    double salary;
    teacher(string name, string sub, double salary) {         //parameterized constructor
        this->name=name;
        this->sub=sub;
        this->salary=salary;
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