#include <iostream>
using namespace std;

int main() 
{
    int a, b, c, y, k;
    cout << "Enter the values of a , b , c , y frequently : ";
    cin >> a >> b >> c >> y ;
    // calculating value
    int z = a * a + 2 * a * b - c;
    int x = (b * b - 2 * a * c - z) / 2 / a;
    k = (y - z - 5 * x) / (2 * b - 2 * y);
    cout << "The value of k is: " << k << endl;
    return 0;
}