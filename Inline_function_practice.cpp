#include <iostream>
using namespace std;
int add(int a = 5, int b = 6)
{
    return (a * b);
}
int add(int c = 5, float d = 6.25)
{
    return (c * d);
}
int main()
{
    float f=5.3;
    cout << "The value is: " << add(5, 6) << endl;
    cout << "The value is: " << add(5, f) << endl;
    return 0;
}