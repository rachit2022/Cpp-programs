#include <iostream>
using namespace std;
class area
{
    int length, breath;

public:
    area(int l, int b)
    {
        length = l;
        breath = b;
        cout << "The area of rectangle is: " << length * breath << endl;
    }
};
int main()
{
    area a(4, 5);
    return 0;
}