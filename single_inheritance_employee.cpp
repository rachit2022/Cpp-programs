#include <iostream>
using namespace std;
class Employee1
{
protected:
    float gross_salary1;

public:
    void setData1(float sal1)
    {
        gross_salary1 = sal1;
    }
    void display1()
    {
        cout << "The gross_salary for employee 1 is: " << gross_salary1 << endl;
    }
};
class Employee2 : public Employee1
{
protected:
    float gross_salary2;

public:
    void setData2(float sal2)
    {
        gross_salary2 = sal2;
    }
    void display2()
    {
        cout << "The gross_salary for employee 1 is: " << gross_salary2 << endl;
    }
};
int main()
{
    Employee2 e;
    e.setData1(5000);
    e.setData2(4000);
    e.display1();
    e.display2();
    return 0;
}