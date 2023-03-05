#include <iostream>
using namespace std;
class Student
{
    char name[40];
    int roll_num;

public:
    void setData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_num;
    }
    void display()
    {
        cout << "Name is: " << name << endl;
        cout << "Roll number is: " << roll_num << endl;
    }
};
int main()
{
    Student s;
    s.setData();
    s.display();
    return 0;
}