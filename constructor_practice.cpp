#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);
    void printData()
    {
        cout << "The number is: " << a << "+" << b << "i" << endl;
    }
};
complex::complex(void)
{
    a = 10;
    b = 5;
};
int main()
{
    complex c;
    c.printData();
    return 0;
}