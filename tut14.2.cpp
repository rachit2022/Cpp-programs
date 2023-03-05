#include <iostream>
using namespace std;
int main()
{
    int marks[4];
    marks[0] = 99;
    marks[1] = 92;
    marks[2] = 93;
    marks[3] = 95;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }
    return 0;
}