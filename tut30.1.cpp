#include <iostream>
using namespace std;
class point
{
    int a, b;

public:
    void getDisplay()
    {
        cout << "Your point is: (" << a << ", " << b << ")" << endl;
    }
    point(int, int);
};
point::point(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    point p(4, 6);
    p.getDisplay();
    point r = point(5, 7);
    r.getDisplay();
    return 0;
}