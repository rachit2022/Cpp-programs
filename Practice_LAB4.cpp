#include <iostream>
using namespace std;
void area(int a)
{
    cout << "Area of square is: " << a * a << endl;
}
void area(float r)
{
    cout << "Area of circle is: " << 3.14 * r * r << endl;
}
void area(int b, int h)
{
    cout << "Area of triangle is: " << 0.5 * b * h << endl;
}
void Rectangle(float l, float b)
{
    cout << "Area of rectangle is: " << l * b << endl;
}
int main()
{
    int side = 3, base = 4, height = 5;
    float radius = 6, length = 7, breath = 8;
    area(side);
    area(radius);
    area(length, breath);
    area(base, height);
    return 0;
}