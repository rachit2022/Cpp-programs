#include <iostream>
#include <string.h>
using namespace std;
int i, j, n;
struct student
{
    char name[50];
    int roll_number;
    int m1, m2, m3, m4, m5;
    int total;
    float average;
    void roll_num();
} s[100], temp;
void roll_num()
{
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (s[i].roll_number > s[j].roll_number)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << "\n Details of student in sorted manner is: " << endl;
        cout << "Name is: " << s[i].name << endl;
        cout << "Roll number is: " << s[i].roll_number << endl;
        cout << "Marks in 5 subject is: " << endl;
        cout << s[i].m1 << s[i].m2 << s[i].m3 << s[i].m4 << s[i].m5 << endl;
    }
}
int main()
{
    cout << "Enter the number of student: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the name of student: " << i + 1 << " ";
        cin >> s[i].name;
        cout << "Enter the roll number of student: " << i + 1 << " ";
        cin >> s[i].roll_number;
        cout << "Enter the marks of student" << i + 1 << " in 5 different subjects:" << endl;
        cin >> s[i].m1 >> s[i].m2 >> s[i].m3 >> s[i].m4 >> s[i].m5;
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5;
        cout << "Total of student " << i + 1 << " is: " << s[i].total << endl;
        s[i].average = s[i].total / 5;
        cout << "Average of student " << i + 1 << " is " << s[i].average << endl;
    }
    roll_num();
    return 0;
}