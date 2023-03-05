#include <iostream>
using namespace std;
class Employee1
{
protected:
    char name[20], des[20];
    int np, bp, hra, da, pf;

public:
    void setData()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the designation: ";
        cin >> des;
        cout << "Enter the np: ";
        cin >> np;
        cout << "Enter the bp: ";
        cin >> bp;
        cout << "Enter the hra: ";
        cin >> hra;
        cout << "Enter the da: ";
        cin >> da;
        cout << "Enter the pf: ";
        cin >> pf;
    }
    void calculate()
    {
        np = hra + bp + da - pf;
    }
};
class Employee2 : public Employee1
{
    float y;

public:
    void setData1()
    {
        cout << "Enter the profit percentage: ";
        cin >> y;
    }
    void showData()
    {
        cout << "Name is: " << name << endl;
        cout << "Designation is: " << des << endl;
        cout << "Da is: " << da << endl;
        cout << "hra is: " << hra << endl;
        cout << "np is: " << np << endl;
        cout << "bp is: " << bp << endl;
        cout << "Final salary is: " << (np + (np * y) / 100) << endl;
    }
};
int main()
{
    Employee2 e2;
    e2.setData();
    e2.calculate();
    e2.setData1();
    e2.showData();
    return 0;
}