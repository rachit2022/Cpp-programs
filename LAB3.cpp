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
void area(float l, float b)
{
    cout << "Area of rectangle is: " << l * b << endl;
}
int main()
{
    int a = 3, b = 4, h = 5;
    float r = 6, l = 7, br = 8;
    int x, choice;
    do
    {
        cout << "Enter your choice:\n1.Area of square\n2.Area of circle\n3.Area of triangle\n4.Area of rectangle" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            area(a);
            break;
        case 2:
            area(r);
            break;
        case 3:
            area(b, h);
            break;
        case 4:
            area(l, br);
        default:
            cout << "Choose the correct option" << endl;
            break;
        }
        cout << "Press 1 to conitune: ";
        cin >> x;
    } while (x == 1);

    return 0;
}