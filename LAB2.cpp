#include <iostream>
using namespace std;
int i, j, n;
void id_sort();
void lowest_tax();
void highest_tax();
struct Employee
{
    char name[50];
    int empid;
    int grade;
    int basic;
    int da;
    int hra;
    int gross_salary;
    int net_salary;
    int tax;
} e[100], temp;
void id_sort()
{
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (e[i].empid > e[j].empid)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Name is: " << e[i].name << endl;
        cout << "ID is: " << e[i].empid << endl;
        cout << "da is: " << e[i].da << endl;
        cout << "hra is: " << e[i].hra << endl;
        cout << "Basic is: " << e[i].basic << endl;
        cout << "Grade is: " << e[i].grade << endl;
        cout << "Gross salary: " << e[i].gross_salary << endl;
        cout << "Net salary: " << e[i].net_salary << endl;
        cout << "Tax is: " << e[i].tax << endl;
    }
}
void lowest_tax()
{
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (e[i].tax > e[j].tax)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Name is: " << e[i].name << endl;
        cout << "ID is: " << e[i].empid << endl;
        cout << "da is: " << e[i].da << endl;
        cout << "hra is: " << e[i].hra << endl;
        cout << "Basic is: " << e[i].basic << endl;
        cout << "Grade is: " << e[i].grade << endl;
        cout << "Gross salary: " << e[i].gross_salary << endl;
        cout << "Net salary: " << e[i].net_salary << endl;
        cout << "Tax is: " << e[i].tax << endl;
    }
}
void highest_tax()
{
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (e[i].tax < e[j].tax)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Name is: " << e[i].name << endl;
        cout << "ID is: " << e[i].empid << endl;
        cout << "da is: " << e[i].da << endl;
        cout << "hra is: " << e[i].hra << endl;
        cout << "Basic is: " << e[i].basic << endl;
        cout << "Grade is: " << e[i].grade << endl;
        cout << "Gross salary: " << e[i].gross_salary << endl;
        cout << "Net salary: " << e[i].net_salary << endl;
        cout << "Tax is: " << e[i].tax << endl;
    }
}
int main()
{
    cout << "Enter the number of employee you want: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter name: ";
        cin >> e[i].name;
        cout << "Enter ID: ";
        cin >> e[i].empid;
        cout << "Enter grade: ";
        cin >> e[i].grade;
        cout << "Enter da: ";
        cin >> e[i].da;
        cout << "Enter hra: ";
        cin >> e[i].hra;
        switch (e[i].grade)
        {
        case 1:
            e[i].basic = 30000;
            cout << "Basic is: " << e[i].basic << endl;
            break;
        case 2:
            e[i].basic = 25000;
            cout << "Basic is: " << e[i].basic << endl;
            break;
        case 3:
            e[i].basic = 20000;
            cout << "Basic is: " << e[i].basic << endl;
            break;
        case 4:
            e[i].basic = 15000;
            cout << "Basic is: " << e[i].basic << endl;
            break;
        }
        e[i].gross_salary = e[i].basic + e[i].da + e[i].hra;
        cout << "Gross salary is: " << e[i].gross_salary << endl;
        if (e[i].gross_salary <= 40000)
        {
            e[i].tax = e[i].gross_salary * 0;
        }
        else if (e[i].gross_salary > 40000 && e[i].gross_salary <= 75000)
        {
            e[i].tax = e[i].gross_salary * 0.1;
        }
        else
        {
            e[i].tax = e[i].gross_salary * 0.15;
        }
        cout << "Tax is: " << e[i].tax << endl;
        e[i].net_salary = e[i].gross_salary - e[i].tax;
        cout << "Net salary is: " << e[i].net_salary << endl;
    }
    int choice, a;
    do
    {
        cout << "Enter the choice:\n1.Employee ID sorting\n2.Lowest tax sorting\n3.Highest tax sorting" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            id_sort();
            break;
        case 2:
            lowest_tax();
            break;
        case 3:
            highest_tax();
            break;
        default:
            cout << "Choose the correct option" << endl;
        }
        cout << "Press 1 to continue: ";
        cin >> a;
    } while (a == 1);
    return 0;
}