#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber()
    {
        cout << "The number is: " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c(4, 2);
    c.printNumber();
    complex b(5);
    b.printNumber();
    return 0;
}