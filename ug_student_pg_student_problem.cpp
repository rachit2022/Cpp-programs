#include <iostream>
#include <string>
using namespace std;
int i, j, n;
class Student
{
protected:
    string name;
    int empid;
    int age;
    int semester;
    int fee;
    float CGPA;

public:
    void setdata();
    void display();
} e[100];
void Student::setdata()
{
    for (i = 0; i < n; i++)
    {
        cout << "Enter the name of student: ";
        cin >> e[i].name;
        cout << "Enter the employee id of student: ";
        cin >> e[i].empid;
        cout << "Enter the age of the student: ";
        cin >> e[i].age;
        cout << "Enter your current semester: ";
        cin >> e[i].semester;
        cout << "Enter the fees for a year: ";
        cin >> e[i].fee;
        cout << "Enter your CGPA: ";
        cin >> e[i].CGPA;
    }
}
void Student::display()
{
    for (i = 0; i < n; i++)
    {
        cout << "Student name is: " << e[i].name << endl;
        cout << "Student ID is: " << e[i].empid << endl;
        cout << "Student age is: " << e[i].age << endl;
        cout << "Current semester is: " << e[i].semester << endl;
        cout << "Student fees is: " << e[i].fee << endl;
        cout << "Student CGPA is: " << e[i].CGPA << endl;
    }
}
class Undergraduate_student : public Student
{
public:
    void displayug()
    {
        cout << "Enter the number of undergraduate student: ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            e[i].setdata();
        }
        for (i = 0; i < n; i++)
        {
            e[i].display();
        }
    }
};
class Postgraduate_student : public Student
{
public:
    void displaypg()
    {
        cout << "Enter the number of postgraduate student: ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            e[i].setdata();
        }
        for (i = 0; i < n; i++)
        {
            e[i].display();
        }
    }
};
int main()
{
    int choice, num;
    Undergraduate_student ug;
    Postgraduate_student pg;
    do
    {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            ug.displayug();
            break;
        case 2:
            pg.displaypg();
            break;
        case 3:
            ug.display();
            break;
        case 4:
            pg.display();
            break;
        default:
            cout << "Enter the correct choice!!!!";
            break;
        }
        cout << "Press 1 to continue: ";
        cin >> num;
    } while (num == 1);
    return 0;
}