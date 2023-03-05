#include <iostream>
#include<cmath>
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
    cout<<"Distance between two points: "<<((pow(1,2))+(pow(1,2)))*(0.5)<<endl;
    return 0;
}