#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcomcomplex(complex, complex);
};
class complex
{
    int a, b;
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber(void)
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcomcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);     
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "The sum of real part is: " << res << endl;
    int resc = calc.sumcomcomplex(o1, o2);
    cout << "The sum of complex part is: " << res << endl;
    return 0;
}