#include <iostream>
using namespace std;
void area(int l, int b)
{
    int length = l, breath = b, area;
    area = length * breath;
    cout << "The area of rectangle is: " << area << endl;
}
void area(int r)
{
    int radius;
    float area;
    area = 3.14 * radius * radius;
    cout << "The area of circle is: " << area << endl;
}
void area(float a)
{
    float side = a;
    int area = side * side;
    cout << "The area of square is: " << area << endl;
}
int main()
{
    area(4, 5);
    area(5);
    float a = 10;
    area(a);
    return 0;
}