#include <iostream>
using namespace std;
void area(int a)
{
    int side = a;
    cout << "The area of square is: " << side * side << endl;
}
void area(float r)
{
    int radius = r;
    cout << "The area of circle is: " << 3.14 * radius * radius << endl;
}
void area(int b, int h)
{
    int base = b, height = h;
    cout << "The area of triangle is: " << 0.5 * base * height << endl;
}
void area(float l, float b)
{
    int length = l, breath = b;
    cout << "The area of rectangle is: " << length * breath << endl;
}
int main()
{
    int a = 5, b = 6, h = 7;
    float l = 8, br = 9, r = 10;
    area(a);
    area(r);
    area(b, h);
    area(l, br);
    return 0;
}