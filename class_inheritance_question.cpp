#include <iostream>
#include <math.h>
using namespace std;
class SimpleCalculator
{
protected:
    int num1;
    int num2;

public:
    void setValue(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void add();
    void subtraction();
    void multiplication();
    void divide();
};
class scinetificCalculator
{
protected:
    int number1;

public:
    void setValues(int a)
    {
        number1 = a;
    }
    void square();
};
class Calculator : public SimpleCalculator, public scinetificCalculator
{
public:
    void show()
    {
        cout << "The value of num1 is: " << num1 << endl;
        cout << "The value of num2 is: " << num2 << endl;
        cout << "The sum of these two number is: " << num1 + num2 << endl;
        cout << "The subtaction of these two number is: " << num1 - num2 << endl;
        cout << "The multiplication of these two number is: " << num1 * num2 << endl;
        cout << "The division of these two number is: " << num1 / num2 << endl;
        cout << "The square of a number is: " << number1 * number1 << endl;
        cout << "The cube of a number is: " << number1 * number1 * number1 << endl;
        cout << "The suareroot of a number is: " << sqrt(number1) << endl;
        cout << "The cube of a number is: " << cbrt(number1) << endl;
    }
};
int main()
{
    Calculator c;
    c.setValue(4, 2);
    c.setValues(16);
    c.show();
    return 0;
}