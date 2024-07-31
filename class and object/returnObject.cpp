#include<iostream>
#include<string>
using namespace std;
class pet {
    string name;
    int age;
public:
    pet(string n,int a) : name(n),age(a){}

    void show() {
        cout<<"Name = "<<name<<"\tAge = "<<age<<endl;
    }

    void change() {
        name += "Jr.";
        age +=1;
    }

};

pet update(pet &p1) {   //return type object
    pet p2 = p1;
    p2.change();
    return p2;
}

int main() {
    pet mypet("Dog",3);
    cout<<"Original data :- "<<endl;
    mypet.show();   //displaying elements

    pet newpet = update(mypet);
    cout<<"New data :-  "<<endl;
    newpet.show();

    cout<<"Original data after getting new data :- "<<endl;
    mypet.show();
    return 0;
}
