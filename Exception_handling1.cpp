#include <iostream>
using namespace std;
int main()
{
    int a = 10, b, c;
    cout << "Enter the number: ";
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
        cout << "Exception by zero is occured" << endl;
    }
    cout << "End of code" << endl;
    return 0;
}