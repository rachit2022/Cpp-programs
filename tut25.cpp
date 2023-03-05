#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setData(void)
    {
        cout << "Enter the id of the employee: "<< endl;
        cin >> id;
    }
    void getData(void)
    {
        cout << "The id of the employee is: " << id << endl;
    }
};
int main()
{
    Employee Apple[10];
    for (int i = 1; i <= 10; i++)
    {
        Apple[i].setData();
        Apple[i].getData();
    }
    return 0;
}