#include <iostream>
using namespace std;
class Employee
{
protected:
    char name[50];
    int empid;

public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter employee id: ";
        cin >> empid;
    }
    void display()
    {
        cout << "Name is: " << name << endl;
        cout << "Employee ID is: " << empid << endl;
    }
};
class Manager : public Employee
{
    char title[50];
    int dues;

public:
    void getData1()
    {
        Employee::getData();
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter dues: ";
        cin >> dues;
    }
    void display1()
    {
        Employee::display();
        cout << "Title is: " << title << endl;
        cout << "Dues is: " << dues << endl;
    }
};
class Scientist : public Employee
{
    char pubs[30];

public:
    void getData2()
    {
        cout << "Enter Publication: ";
        cin >> pubs;
    }
    void display2()
    {
        Employee::display();
        cout << "Publication is: " << pubs << endl;
    }
};
class Laborer : public Employee
{
public:
    void getData3()
    {
        Employee::getData();
    }
    void display3()
    {
        Employee::display();
    }
};
int main()
{
    Employee e;
    Scientist s;
    Manager m;
    Laborer l;
    e.getData();
    e.display();
    s.getData2();
    s.display2();
    m.getData1();
    m.display1();
    l.getData3();
    l.display3();
    return 0;
}