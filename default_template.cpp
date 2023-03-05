#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float>
class Rachit
{
public:
    T1 a;
    T2 b;
    Rachit(T1 c, T2 d)
    {
        a = c;
        b = d;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};
int main()
{
    Rachit<> r(4, 4.5);
    r.display();
    return 0;
}