#include <iostream>
using namespace std;
int main()
{
    int a = 10, b, c;
    cout << "Enter the value of b: ";
    cin >> b;
    try
    {

        if (b == 0)
        {
            throw b;
        }
        else
        {
            c = a / b;
        }
    }
    catch (int e)
    {
        cout << "Division by zero has occured" << endl;
    }
    cout << "END" << endl;
    return 0;
}