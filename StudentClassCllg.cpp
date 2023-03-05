#include <iostream>
using namespace std;
class Student
{
    char name[50];
    int roll_num;

public:
    void setData()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the roll number: ";
        cin >> roll_num;
    }
    void getData()
    {
        cout << "Name is: " << name << endl;
        cout << "Roll number is: " << roll_num << endl;
    }
};
int main()
{
    Student s;
    s.setData();
    s.getData();
    return 0;
}