#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "The value of a and b is before swapping: " << a << "," << b << endl;
    swap(&a, &b);
    cout << "The value of a and b is after swapping: " << a << "," << b << endl;
    return 0;
}