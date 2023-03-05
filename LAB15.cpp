#include <iostream>
using namespace std;
class shape
{
public:
    virtual void area() = 0;
};
class Triangle : public shape
{
    int b, h;

public:
    Triangle(int a, int c)
    {
        b = a;
        h = c;
    }
    void area()
    {
        cout << "Area of triangle is: " << 0.5 * b * h << endl;
    }
};
class Reactangle : public shape
{
    int l, b;

public:
    Reactangle(int a, int c)
    {
        l = a;
        b = c;
    }
    void area()
    {
        cout << "Area of rectangle is: " << l * b << endl;
    }
};
int main()
{
    shape *s;
    s = new Triangle(10, 20);
    s->area();
    s = new Reactangle(10, 30);
    s->area();
    return 0;
}