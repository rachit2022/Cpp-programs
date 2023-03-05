#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setDAta(int x, int y)
    {
        a = x;
        b = y;
    }
    friend complex sumComplex(complex o1, complex o2);
    void getData()
    {
        cout << "Your number is: " << a << "+" << b << "i" << endl;
    }
};
complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setDAta((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setDAta(1, 4);
    c1.getData();
    c2.setDAta(2, 5);
    c2.getData();
    sum = sumComplex(c1, c2);
    sum.getData();
    return 0;
}