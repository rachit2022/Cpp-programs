#include <iostream>
#include <string.h>
using namespace std;
int n, i, j;
struct student
{
    char name[50];
    int roll_num;
    int m1, m2, m3, m4, m5;
    int total;
    int average;
    void sort_roll_no();
    void sort_total();
    void sort_average();
} s[100], temp;
void sort_roll_no()
{
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].roll_num > s[j].roll_num)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << "Name: " << s[i].name << endl;
        cout << "Roll number: " << s[i].roll_num << endl;
        cout << "Marks in 5 subject: " << s[i].m1 << " " << s[i].m2 << " " << s[i].m3 << " " << s[i].m4 << " " << s[i].m5 << endl;
        cout << "Total: " << s[i].total << endl;
        cout << "Average: " << s[i].average << endl;
    }
}
void sort_total()
{
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].total > s[j].total)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << "Name: " << s[i].name << endl;
        cout << "Roll number: " << s[i].roll_num << endl;
        cout << "Marks in 5 subject: " << s[i].m1 << " " << s[i].m2 << " " << s[i].m3 << " " << s[i].m4 << " " << s[i].m5 << endl;
        cout << "Total: " << s[i].total << endl;
        cout << "Average: " << s[i].average << endl;
    }
}
void sort_average()
{
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].average > s[j].average)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << "Name: " << s[i].name << endl;
        cout << "Roll number: " << s[i].roll_num << endl;
        cout << "Marks in 5 subject: " << s[i].m1 << " " << s[i].m2 << " " << s[i].m3 << " " << s[i].m4 << " " << s[i].m5 << endl;
        cout << "Total: " << s[i].total << endl;
        cout << "Average: " << s[i].average << endl;
    }
}
int main()
{
    int choice;
    cout << "Enter the number of student: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the details of student " << i + 1 << endl;
        cout << "Enter the name of student: ";
        cin >> s[i].name;
        cout << "Enter the roll number of the student: ";
        cin >> s[i].roll_num;
        cout << "Enter the marks of student in 5 subjects: ";
        cin >> s[i].m1 >> s[i].m2 >> s[i].m3 >> s[i].m4 >> s[i].m5;
        s[i].total = (s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5);
        cout << "The total of student is: " << s[i].total << endl;
        s[i].average = s[i].total / 5;
        cout << "The average of marks of student is: " << s[i].average << endl;
    }
    cout << "\n\n Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        sort_roll_no();
        break;
    case 2:
        sort_total();
        break;
    case 3:
        sort_average();
        break;
    default:
        break;
    }
    return 0;
}