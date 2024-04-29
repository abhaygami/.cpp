#include<iostream>
using namespace std;
int main()
{
    float fen;
    cout<<"Enter temprature (in f) : ";
    cin>>fen;
    float c = (fen - 32.0) * (5.0 / 9.0);
    cout<<fen<<" f = "<<c<<" C";
}