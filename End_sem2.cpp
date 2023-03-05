#include <iostream>
using namespace std;
void area(int l, int b)
{
    cout << "The area of rectangle is: " << l * b << endl;
}
void area(float r)
{
    cout << "The area of circle is: " << 3.14 * r * r << endl;
}
void area(float b, float h)
{
    cout << "The area of triangle is: " << 0.5 * b * h << endl;
}
void area(int a)
{
    cout << "The area of square is: " << a * a << endl;
}
int main()
{
    int l = 2, b = 3, a = 4;
    float r = 5, h = 6, br = 7;
    area(a);
    area(l, b);
    area(br, h);
    area(r);
    return 0;
}