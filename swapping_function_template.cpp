#include <iostream>
using namespace std;
template <typename T>
T swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    cout << "Enter the number x: ";
    cin >> x;
    cout << "Enter the number y: ";
    cin >> y;
    cout << "The value of x and y before swapping: " << x << " " << y << endl;
    swap(x, y);
    cout << "The value of x and y after swapping: " << x << " " << y << endl;
    return 0;
}