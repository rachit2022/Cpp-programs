#include <iostream>
using namespace std;
template <class T>
void swap(T *x, T *y)
{
    T temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x = 8, y = 9;
    cout << "Before swapping: " << x << " " << y << endl;
    swap<int>(&x, &y);
    cout << "Before swapping: " << x << " " << y << endl;
    return 0;
}