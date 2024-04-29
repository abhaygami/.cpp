#include<iostream>
using namespace std;
int main()
{
    float bs,da,ma,hra,gross;
    cout<<"Enter Basic Salary: ";
    cin>>bs;
    da=0.4*bs; // 40% of basic salary
    ma=0.05*bs; // 5% of basic salary
    hra=0.2*bs;// 20% of basic salary
    gross=(float)(bs+da+ma+hra); // adding all the components to get
    // total gross salary
    cout << "gross  Salary = Basic Salary + DA + HRA + MDA = $";
    cout << gross << endl;
    // return 0;
    return 0;
}