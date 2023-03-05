#include <iostream>
using namespace std;
class area
{
    int a;

public:
    area(int a1)
    {
        a = a1;
        cout << "Area of square is: " << a * a << endl;
    }
};
int main()
{
    area a(5);
    return 0;
}