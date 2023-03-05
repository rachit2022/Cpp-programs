#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setValue();
    void getValue();
};
void complex::setValue()
{
    cout << "Enter the real part of complex number: ";
    cin >> a;
    cout << "Enter the imaginary part of complex number: ";
    cin >> b;
}
void complex::getValue()
{
    cout << "The complex number is: " << a << " + " << b << "i" << endl;
}
int main()
{
    complex c;
    c.setValue();
    c.getValue();
    return 0;
}