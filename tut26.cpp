#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void getData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    friend complex sumData(complex o1, complex o2);
    void printData(void)
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
};
complex sumData(complex o1, complex o2)
{
    complex o3;
    o3.getData((o1.a + o1.b), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.getData(1, 4);
    c1.printData();
    c2.getData(3, 5);
    c2.printData();
    sum = sumData(c1, c2);
    sum.printData();
    return 0;
}