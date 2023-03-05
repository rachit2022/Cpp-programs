#include <iostream>
using namespace std;
int i, n;
class Employee
{
protected:
    string name;
    int id;

public:
    void getData();
    void display();
} e[100];
void Employee::getData()
{
    for (i = 0; i < n; i++)
    {
        cout << "Enter the name: ";
        cin >> e[i].name;
        cout << "Enter the ID: ";
        cin >> e[i].id;
    }
}
void Employee::display()
{
    for (i = 0; i < n; i++)
    {
        cout << "Name is: " << e[i].name << endl;
        cout << "ID is: " << e[i].id << endl;
    }
}
class Manager : public Employee
{
};
class Scientist : public Employee
{
};
class Laborer : public Employee
{
};
int main()
{
    cout << "Enter the number of employee: ";
    cin >> n;
    Manager m;
    Scientist s;
    Laborer l;
    m.getData();
    m.display();
    s.getData();
    s.display();
    l.getData();
    l.display();
    return 0;
}