#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 1, b = 12, c = 123, d = 1234, e = 12345, f = 123456;
    int g = 1, h = 12, i = 123, j = 1234, k = 12345, l = 123456;
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;
    cout << "The value of d is: " << d << endl;
    cout << "The value of e is: " << e << endl;
    cout << "The value of f is: " << f << endl;
    cout << "The value of l after using setw: " << setw(6) << l << endl;
    cout << "The value of k after using setw: " << setw(6) << k << endl;
    cout << "The value of j after using setw: " << setw(6) << j << endl;
    cout << "The value of i after using setw: " << setw(6) << i << endl;
    cout << "The value of h after using setw: " << setw(6) << h << endl;
    cout << "The value of g after using setw: " << setw(6) << g << endl;
    return 0;
}