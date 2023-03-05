#include <iostream>
using namespace std;
class Base1
{
protected:
    int baseint1;

public:
    void setValue1(int a)
    {
        baseint1 = a;
    }
};
class Base2
{
protected:
    int baseint2;

public:
    void setValue2(int a)
    {
        baseint2 = a;
    }
};
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base1 is: " << baseint1 << endl;
        cout << "The value of base2 is: " << baseint2 << endl;
        cout << "The sum of these values is: " << baseint1 + baseint2 << endl;
    }
};
int main()
{
    Derived d;
    d.setValue1(25);
    d.setValue2(5);
    d.show();
    return 0;
}