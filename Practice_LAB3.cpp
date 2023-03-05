#include <iostream>
using namespace std;
class shape
{
public:
    virtual void area() = 0;
};
class Triangle : public shape
{
    int h, b;

public:
    Triangle(int a, int c)
    {
        h = a;
        b = c;
    }
    void area()
    {
        cout << "Area of triangle is: " << 0.5 * h * b << endl;
    }
};
class Rectangle : public shape
{
    int l, b;

public:
    Rectangle(int a, int c)
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
    s = new Rectangle(10, 20);
    s->area();
    return 0;
}