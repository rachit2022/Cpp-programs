#include <iostream>
using namespace std;
int add(int a, int b)
{
    return (a + b);
}
int main()
{
    int num1, num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    cout << "The sum of num1 and num2 is: " << add(num1, num2) << endl;
    return 0;
}