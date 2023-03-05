#include <iostream>
using namespace std;
class area
{
public:
    virtual void display() = 0;
};
class Triangle : public area
{
    int length, breath;

public:
    Triangle(int l, int b)
    {
        length = l;
        breath = b;
    }
    void display()
    {
        cout << "The area of triangle is: " << 0.5 * length * breath << endl;
    }
};
class Rectangle : public area
{
    int length, breath;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breath = b;
    }
    void display()
    {
        cout << "The area of rectangle is: " << length * breath << endl;
    }
};
int main()
{
    area *s;
    s = new Triangle(3, 4);
    s->display();
    s = new Rectangle(5, 6);
    s->display();
    return 0;
}