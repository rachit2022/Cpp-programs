#include <iostream>
using namespace std;
class Employee1
{
protected:
    char name[40], des[40];
    float da, hra, pf, np, bp;

public:
    void setData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter desigination: ";
        cin >> des;
        cout << "Enter da: ";
        cin >> da;
        cout << "Enter hra: ";
        cin >> hra;
        cout << "Enter pf: ";
        cin >> pf;
        cout << "Enter bp: ";
        cin >> bp;
    }
    void calculate()
    {
        np = hra + da + bp - pf;
    }
};
class Employee2 : public Employee1
{
    float y;

public:
    void setData1()
    {
        cout << "Enter profit percentage: ";
        cin >> y;
    }
    void display()
    {
        cout << "Name is: " << name << endl;
        cout << "Designation is: " << des << endl;
        cout << "hra is: " << hra << endl;
        cout << "da is: " << da << endl;
        cout << "bp is: " << bp << endl;
        cout << "np is: " << np << endl;
        cout << "Final salary is: " << (np + (np * y) / 100) << endl;
    }
};
int main()
{
    Employee2 e;
    e.setData();
    e.calculate();
    e.setData1();
    e.display();
    return 0;
}