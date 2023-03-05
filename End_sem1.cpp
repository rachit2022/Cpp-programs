#include <iostream>
using namespace std;
void roll_num_sort();
void total_sort();
void average_sort();
int i, j, n;
struct Student
{
    char name[30];
    int roll_num;
    int m1, m2, m3, m4, m5;
    int total;
    int average;
} s[100], temp;
void roll_num_sort()
{
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (s[j].roll_num < s[i].roll_num)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Name: " << s[i].name << endl;
        cout << "Roll number: " << s[i].roll_num << endl;
        cout << "Marks: " << endl
             << s[i].m1 << endl
             << s[i].m2 << endl
             << s[i].m3 << endl
             << s[i].m4 << endl
             << s[i].m5 << endl;
        cout << "Total is: " << s[i].total << endl;
        cout << "Average is: " << s[i].average << endl;
    }
}
void total_sort()
{
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (s[j].total < s[i].total)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Name: " << s[i].name << endl;
        cout << "Roll number: " << s[i].roll_num << endl;
        cout << "Marks: " << endl
             << s[i].m1 << endl
             << s[i].m2 << endl
             << s[i].m3 << endl
             << s[i].m4 << endl
             << s[i].m5 << endl;
        cout << "Total is: " << s[i].total << endl;
        cout << "Average is: " << s[i].average << endl;
    }
}
void average_sort()
{
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (s[j].average < s[i].average)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Name: " << s[i].name << endl;
        cout << "Roll number: " << s[i].roll_num << endl;
        cout << "Marks: " << endl
             << s[i].m1 << endl
             << s[i].m2 << endl
             << s[i].m3 << endl
             << s[i].m4 << endl
             << s[i].m5 << endl;
        cout << "Total is: " << s[i].total << endl;
        cout << "Average is: " << s[i].average << endl;
    }
}
int main()
{
    cout << "Enter the number of students: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter detail for student: " << i << endl;
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter roll number: ";
        cin >> s[i].roll_num;
        cout << "Enter the marks of student for 5 subjects" << endl;
        cin >> s[i].m1 >> s[i].m2 >> s[i].m3 >> s[i].m4 >> s[i].m5;
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5;
        cout << "Total is: " << s[i].total << endl;
        s[i].average = s[i].total / 5;
        cout << "Average is: " << s[i].average << endl;
    }
    int choice, a;
    do
    {
        cout << "Enter your choice:1.Roll number sort\n2.Total sort\n3.Average sort" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            roll_num_sort();
            break;
        case 2:
            total_sort();
            break;
        case 3:
            average_sort();
            break;
        default:
            cout << "Enter the correct choice" << endl;
        }
        cout << "Press 1 to continue: ";
        cin >> a;
    } while (a == 1);
    return 0;
}