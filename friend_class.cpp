#include <iostream>
using namespace std;
class complex;
class calculator
{
    int sum(int a, int b)
    {
        return (a + b);
    }

public:
    int sumRealcomplex(complex, complex);
};
class complex
{
    int a;
    int b;
    friend int calculator::sumRealcomplex(complex, complex);

public:
    void setValue(int x, int y)
    {
        a = x;
        b = y;
    }
    void getValue()
    {
        cout << "The number is: " << a << "+" << b << "i" << endl;
    }
};
int calculator::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int main()
{
    complex c1, c2;
    c1.setValue(1, 4);
    c1.getValue();
    c2.setValue(5, 7);
    c2.getValue();
    calculator cal;
    int res = cal.sumRealcomplex(c1,c2);
    cout << "The sum of real number of complex number is: " << res << endl;
    return 0;
}