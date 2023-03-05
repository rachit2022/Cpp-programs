#include <iostream>
using namespace std;
template <class T>
void swapping(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 10, b = 20;
    cout << "The value of a and b before swapping is: " << a << " " << b << endl;
    swapping(a, b);
    cout << "The value of a and b after swapping is: " << a << " " << b << endl;
    return 0;
}