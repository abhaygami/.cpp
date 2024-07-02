#include<iostream>
#include<string>
using namespace std;
class employee {
private:
    double salary;
public:
    string name;
    string dept;
     
    void input() {
        cout<<"Enter name : ";
        cin>>this->name;
        cout<<"Enter dept : ";
        cin>>this->dept;
        cout<<"Enter salary : ";
        cin>>this->salary;
    }
    void display() {
        cout<<"Name : "<<this->name<<" Dept : "<<this->dept<<" Salary : "<<this->salary<<endl;
    }
};
int main() {
    employee e1,e2;
    e1.input();
    e2.input();
    e1.display();
    e2.display();
    return 0;
}