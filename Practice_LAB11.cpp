#include <iostream>
using namespace std;
class shape
{
public:
    virtual void area() = 0;
};
class Triangle : public shape
{
    int base, height;

public:
    Triangle(int a, int b)
    {
        base = a;
        height = b;
    }
    void area()
    {
        cout << "Area of triangle is: " << base * height << endl;
    }
};
class Rectangle : public shape
{
    int length, breath;

public:
    Rectangle(int a, int b)
    {
        length = a;
        breath = b;
    }
    void area()
    {
        cout << "Area of rectangle is: " << length * breath << endl;
    }
};
int main()
{
    shape *s;
    s = new Triangle(4, 5);
    s->area();
    s = new Rectangle(5, 6);
    s->area();
    return 0;
}