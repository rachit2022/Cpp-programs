#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *b = &a;
    cout << "The address of a is: " << &a << endl;
    cout << "The address of b is: " << b << endl;
    cout << "The value of a is: " << *b << endl;
    return 0;
}