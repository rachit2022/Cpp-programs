#include <iostream>
using namespace std;
class space
{
private:
    int a, b, c;

public:
    void setData(int a1, int a2, int a3);
    void display();
    void operator-();
};
void space::setData(int a1, int a2, int a3)
{
    a = a1;
    b = a2;
    c = a3;
}
void space::operator-()
{
    a = -a;
    b = -b;
    c = -c;
}
void space::display()
{
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;
}
int main()
{
    space s;
    s.setData(2, 3, 4);
    s.display();
    -s;
    s.display();
    return 0;
}