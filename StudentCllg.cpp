#include <iostream>
using namespace std;
int i, j, n;
void roll_sort();
void total_sort();
void average_sort();
void input();
struct Student
{
    char name[50];
    int roll_num;
    int m1, m2, m3, m4, m5;
    int total;
    float average;
} s[100], temp;
void input()
{
    cout << "Enter the number of student: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter detail of student " << i << endl;
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter roll number: ";
        cin >> s[i].roll_num;
        cout << "Enter marks: ";
        cin >> s[i].m1 >> s[i].m2 >> s[i].m3 >> s[i].m4 >> s[i].m5;
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5;
        cout << "Total is: " << s[i].total << endl;
        s[i].average = s[i].total / 5;
        cout << "Average is: " << s[i].average << endl;
    }
}
void roll_sort()
{
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (s[i].roll_num > s[j].roll_num)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Name is: " << s[i].name << endl;
        cout << "Roll number is: " << s[i].roll_num << endl;
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
            if (s[i].total > s[j].total)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Name is: " << s[i].name << endl;
        cout << "Roll number is: " << s[i].roll_num << endl;
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
            if (s[i].average > s[j].average)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        cout << "Name is: " << s[i].name << endl;
        cout << "Roll number is: " << s[i].roll_num << endl;
        cout << "Total is: " << s[i].total << endl;
        cout << "Average is: " << s[i].average << endl;
    }
}
int main()
{
    int choice, a;
    input();
    do
    {
        cout << "Enter your choice:\n1.Roll number sorting\n2.Total sorting\n3.Average sorting" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            roll_sort();
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