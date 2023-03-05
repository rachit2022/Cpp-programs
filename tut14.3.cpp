#include <iostream>
using namespace std;
int main()
{
    int i = 0, marks[4];
    marks[0] = 99;
    marks[1] = 92;
    marks[2] = 93;
    marks[3] = 95;
    while (i < 4)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
        i++;
    }
    return 0;
}