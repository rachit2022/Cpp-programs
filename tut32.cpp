#include <iostream>
using namespace std;
class simple
{
    int data1, data2;

public:
    void getData()
    {
        cout << "Your data is: " << data1 << " and " << data2 << endl;
    }
    simple(int, int);
};
simple::simple(int a, int b = 9)
{
    data1 = a;
    data2 = b;
}
int main()
{
    simple s(22);
    s.getData();
    return 0;
}