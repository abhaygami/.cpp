#include<iostream>
using namespace std;
int main()
{
    float fen,c;
    cout<<"Enter temperature in Fahrenheit : ";
    cin>>fen;
    c = (fen - 32.0) * (5.0 / 9.0);
    if(c >= 40)
    {
        cout<<"temperature is very hot."<<endl;
    } 
    else if (c >= 37 && c < 40)
    {
        cout<<"temperature is hot."<<endl;
    } 
    else if (c >= 34 && c < 37)
    {
        cout<<"temperature is warm."<<endl;
    } 
    else 
    {
        cout<<"temperature is cool."<<endl;
    }
    return 0;
}