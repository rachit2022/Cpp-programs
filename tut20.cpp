#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout << "Using function with 2 arguments" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Using function with 3 arguments" << endl;
    return a + b + c;
}
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}
int cube(int a)
{
    return (a * a * a);
}
int rectangle(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The sum of 3 and 6 is: " << endl
         << sum(3, 6) << endl;
    cout << "The sum of 3,7,6 is: " << endl
         << sum(3, 7, 6) << endl;
    cout << "The volume of cylinder is with radius=5 and height=10: " << volume(5, 10) << endl;
    cout << "The cube of square is with side a=5: " << cube(5) << endl;
    cout << "The volume of rectangle is with length=10,breath=5 and height=5: " << rectangle(10, 5, 5) << endl;
    return 0;
}
