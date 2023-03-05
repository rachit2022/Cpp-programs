#include <iostream>
using namespace std;
struct employee
{
    int eID;
    char favchar;
    float salary;
};
int main()
{
    struct employee harry;
    harry.eID = 1;
    harry.favchar = 'R';
    harry.salary = 120000000;
    cout << "The ID of employee is: " << harry.eID << endl;
    cout << "The favchar of employee is: " << harry.favchar << endl;
    cout << "The salary of employee is: " << harry.salary << endl;
    return 0;
}