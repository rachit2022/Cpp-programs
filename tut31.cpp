#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void getNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
    complex(int x, int y);
    complex(int x);
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
complex::complex(int x)
{
    a = x;
    b = 2;
}
int main()
{
    complex c(4, 5);
    c.getNumber();
    complex c1(6);
    c1.getNumber();
    return 0;
}