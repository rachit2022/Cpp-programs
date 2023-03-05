#include <iostream>
using namespace std;
class Student
{
    string name;
    int roll_num;

public:
    void setData()
    {
        name = "Rachit";
        roll_num = 32;
    }
    friend void display();
};
void display()
{
    Student s;
    s.setData();
    cout << "The name is: " << s.name << endl;
    cout << "The name is: " << s.roll_num << endl;
}
int main()
{
    display();
    return 0;
}