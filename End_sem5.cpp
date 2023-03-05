#include <iostream>
using namespace std;
class Student
{
    char name[30];
    int roll_num;

public:
    void setData();
    void display();
};
void Student::setData()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll_num;
}
void Student::display()
{
    cout << "Name is: " << name << endl;
    cout << "Roll number is: " << roll_num << endl;
}
int main()
{
    Student s;
    s.setData();
    s.display();
    return 0;
}