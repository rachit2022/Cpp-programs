#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex(int, int);
    void showData()
    {
        cout << "The number is: " << a << "+" << b << "i" << endl;
    }
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex c(4, 5);
    c.showData();
    complex b = complex(6, 8);
    b.showData();
    return 0;
}