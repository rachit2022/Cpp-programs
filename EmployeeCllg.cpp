#include <iostream>
using namespace std;
int i, j, n;
void input();
void id_sort();
void highest_tax();
void lowest_tax();
struct Employee
{
    char name[50];
    int empid;
    int grade;
    int basic;
    int tax;
    int da;
    int hra;
    int gross_salary;
    int net_salary;
} E[100], temp;
void input()
{
    cout << "Enter the number of employees you want: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter name: ";
        cin >> E[i].name;
        cout << "Enter ID: ";
        cin >> E[i].empid;
        cout << "Enter Grade: ";
        cin >> E[i].grade;
        cout << "Enter da: ";
        cin >> E[i].da;
        cout << "Enter hra: ";
        cin >> E[i].hra;
        switch (E[i].grade)
        {
        case 1:
            E[i].basic = 30000;
            break;
        case 2:
            E[i].basic = 25000;
            break;
        case 3:
            E[i].basic = 20000;
            break;
        case 4:
            E[i].basic = 15000;
        default:
            E[i].basic = 0;
        }
        E[i].gross_salary = E[i].basic + E[i].da + E[i].hra;
        cout << "The gross salary is: " << E[i].gross_salary << endl;
        if (E[i].gross_salary <= 40000)
        {
            E[i].tax = E[i].gross_salary * 0;
            cout << "Tax is: " << E[i].tax << endl;
        }
        else if (E[i].gross_salary > 40000 && E[i].gross_salary <= 75000)
        {
            E[i].tax = E[i].gross_salary * 0.1;
            cout << "Tax is: " << E[i].tax << endl;
        }
        else
        {
            E[i].tax = E[i].gross_salary * 0.15;
            cout << "Tax is: " << E[i].tax << endl;
        }
        E[i].net_salary = E[i].gross_salary - E[i].tax;
        cout << "Net salary is: " << E[i].net_salary << endl;
    }
}
void id_sort()
{
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (E[i].empid > E[j].empid)
            {
                temp = E[i];
                E[i] = E[j];
                E[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Name is: " << E[i].name << endl;
        cout << "Employee ID is: " << E[i].empid << endl;
        cout << "Grade is: " << E[i].grade << endl;
        cout << "Da is: " << E[i].da << endl;
        cout << "hra is: " << E[i].hra << endl;
        cout << "Gross salary is: " << E[i].gross_salary << endl;
        cout << "Net Salary is: " << E[i].net_salary << endl;
        cout << "Tax paid is: " << E[i].tax << endl;
    }
}
void highest_tax()
{
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (E[i].tax < E[j].tax)
            {
                temp = E[i];
                E[i] = E[j];
                E[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Name is: " << E[i].name << endl;
        cout << "Employee ID is: " << E[i].empid << endl;
        cout << "Grade is: " << E[i].grade << endl;
        cout << "Da is: " << E[i].da << endl;
        cout << "hra is: " << E[i].hra << endl;
        cout << "Gross salary is: " << E[i].gross_salary << endl;
        cout << "Net Salary is: " << E[i].net_salary << endl;
        cout << "Tax paid is: " << E[i].tax << endl;
    }
}
void lowest_tax()
{
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (E[i].tax > E[j].tax)
            {
                temp = E[i];
                E[i] = E[j];
                E[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Name is: " << E[i].name << endl;
        cout << "Employee ID is: " << E[i].empid << endl;
        cout << "Grade is: " << E[i].grade << endl;
        cout << "Da is: " << E[i].da << endl;
        cout << "hra is: " << E[i].hra << endl;
        cout << "Gross salary is: " << E[i].gross_salary << endl;
        cout << "Net Salary is: " << E[i].net_salary << endl;
        cout << "Tax paid is: " << E[i].tax << endl;
    }
}
int main()
{
    int choice, a;
    input();
    do
    {
        cout << "Enter your choice\n1.Employee ID sorting\n2.Highest tax sorting\n3.Lowest tax sorting" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            id_sort();
            break;
        case 2:
            highest_tax();
            break;
        case 3:
            lowest_tax();
            break;
        default:
            cout << "Please enter the correct choice" << endl;
        }
        cout << "Press 1 to continue: ";
        cin >> a;
    } while (a == 1);
    return 0;
}