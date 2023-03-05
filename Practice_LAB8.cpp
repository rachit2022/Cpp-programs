#include <iostream>
using namespace std;
class add
{
    int a, b;

public:
    add(int c, int d)
    {
        a = c;
        b = d;
    }
    void display()
    {
        cout << "The sum is: " << a + b << endl;
    }
};
int main()
{
    add a(4, 5);
    a.display();
    return 0;
}