#include<iostream>
using namespace std;
int main()
{
    int pop2013;
    cout<<"Enter Populaction of 2015 : ";
    cin>>pop2013;
    if(pop2013 <= 0)
    {
        cout<<"Enter valid population";
    }
     else 
    {
        int pop2014 , pop2015 , pop2016 , pop2017 , pop2018 ;
        pop2014 = pop2013 + (pop2013 * 0.10);
        pop2015 = pop2014 - (pop2014 * 0.10);
        pop2016 = pop2015 + (pop2015 * 0.1123);
        pop2017 = pop2016;
        pop2018 = pop2017 - (pop2017 * 0.042);
        cout<<"Populaction of 2018 is : "<<pop2018;
    }
}