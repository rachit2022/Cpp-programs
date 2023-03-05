#include <iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Consturctor constructed" << endl;
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};
int main()
{
    Test t(4, 6);
    return 0;
}