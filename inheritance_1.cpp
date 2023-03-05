#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    Employee(){};
};
class programmer : public Employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int programCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee harry(1);
    cout << harry.id << endl;
    cout << harry.salary << endl;
    programmer p(10);
    cout << p.id << endl;
    p.getData();
    return 0;
}