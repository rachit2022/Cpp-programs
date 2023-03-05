#include <iostream>
using namespace std;
template <class T1, class T2>
class myclass
{
public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "The data1 is: " << data1 << endl;
        cout << "The data2 is: " << data2 << endl;
    }
};
int main()
{
    myclass<int, float> m(2, 3.2);
    m.display();
    return 0;
}