#include <iostream>
using namespace std;
int n, i, j;
class Employee
{
    int Eid;
    char Ename[50];
    float Esalary;

public:
    void sort();
    void salary_sort();
    void setData();
} e[100], temp;
void Employee::setData()
{
    cout << "Enter the name of employee " << i + 1 << ": ";
    cin >> e[i].Ename;
    cout << "Enter the id of employee " << i + 1 << ": ";
    cin >> e[i].Eid;
    cout << "Enter the Esalary of employee " << i + 1 << ": ";
    cin >> e[i].Esalary;
}
void Employee::sort()
{
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (e[i].Eid > e[j].Eid)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << "Name is: " << e[i].Ename << endl;
        cout << "Employee id is: " << e[i].Eid << endl;
        cout << "salary is: " << e[i].Esalary << endl;
    }
}
void Employee::salary_sort()
{
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (e[i].Esalary > e[j].Esalary)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << "Name is: " << e[i].Ename << endl;
        cout << "Employee id is: " << e[i].Eid << endl;
        cout << "salary is: " << e[i].Esalary << endl;
    }
}
int main()
{
    int choice;
    cout << "enter the number of employee you want: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        e[i].setData();
    }
    cout << "Enter the choice of sorting:\n1.sort\n2.salary_sort\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        for (i = 0; i < n; i++)
        {
            e[i].sort();
        }
        break;
    case 2:
        for (i = 0; i < n; i++)
        {
            e[i].salary_sort();
        }
        break;
    default:
        cout << "Invalid Argument...." << endl;
        break;
    }
    return 0;
}