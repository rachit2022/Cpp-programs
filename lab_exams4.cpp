#include <iostream>
using namespace std;
class Student
{
    char name[50];
    int id;

public:
    void setData();
    void showData();
};
void Student::setData()
{
    cout << "Enter the name of the student: ";
    cin >> name;
    cout << "Enter the id of the student: ";
    cin >> id;
}
void Student::showData()
{
    cout << "The name of the student is: " << name << endl;
    cout << "the id of the student is: " << id << endl;
}
int main()
{
    Student s;
    s.setData();
    s.showData();
    return 0;
}