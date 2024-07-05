#include<iostream>
using namespace std;

class student {
public:
    string name;
    float *cgpaptr;

    student(string name, float cgpa) {
        this->name = name;
        cgpaptr = new float;  // dynamic memory allocation (new == malloc||calloc)
        *cgpaptr = cgpa;
    }

    student(const student &obj) {  // making deep copy constructor
        this->name = obj.name;
        cgpaptr = new float;  // allocate new memory for the copy
        *cgpaptr = *obj.cgpaptr;  // copy the value
    }

    void display() {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaptr << endl;
    }
};

int main() {
    student s1("Abhay Gami", 7.50);
    cout << "Displaying details before updating: " << endl;
    s1.display();  // displaying details before updating

    student s2(s1);  // deep copy of s1 into s2
    *s2.cgpaptr = 7;

    cout << "Displaying details after updating s2: " << endl;
    s1.display();  // displaying details after updating
    s2.name="abhay";
    s2.display();  // displaying s2 details

    return 0;
}
