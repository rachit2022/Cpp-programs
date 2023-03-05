#include <iostream>
using namespace std;
inline int product(int x, int y)
{
    return x * y;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;
    cout << "The product of a and b is: " << product(a, b) << endl;
    return 0;
}