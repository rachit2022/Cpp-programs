#include <iostream>
using namespace std;
class Grandfather
{
public:
    void display()
    {
        cout << "I'm grandfather and next will be-" << endl;
    }
};
class Father : public Grandfather
{
public:
    void display1()
    {
        Grandfather::display();
        cout << "I'm father and next will be-" << endl;
    }
};
class Son : public Father
{
public:
    void display2()
    {
        Father::display1();
        cout << "I'm their son" << endl;
    }
};
int main()
{
    Son s;
    s.display2();
    return 0;
}