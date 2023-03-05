#include <iostream>
using namespace std;
class add
{
    int a, b;

public:
    add(int n, int m)
    {
        a = n;
        b = m;
    }
    void display()
    {
        cout << "The sum is: " << a + b << endl;
    }
};
int main()
{
    add d(4, 5);
    d.display();
    return 0;
}