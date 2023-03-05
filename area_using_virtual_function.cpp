#include <iostream>
using namespace std;
class area
{
public:
    int height = 8;
    int base = 6;
    virtual void display()
    {
        cout << "Area of triangle" << endl;
        cout << "The area of triangle is: " << (0.5 * base * height) << endl;
    }
};
class area_of_rectangle : public area
{
public:
    int length = 5;
    int breath = 6;
    void display()
    {
        cout << "Area of rectangle" << endl;
        cout << "Area of rectangle is: " << (length * breath) << endl;
        cout << "The area of triangle is: " << (0.5 * base * height) << endl;
    }
};
int main()
{
    area *a;
    area_of_rectangle aa;
    a = &aa;
    a->display();
    return 0;
}