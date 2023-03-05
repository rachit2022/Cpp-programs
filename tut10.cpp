#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "You are not allowed to the party";
    }
    else if (age == 18)
    {
        cout << "You will get a kid pass to enter the party";
    }
    else
    {
        cout << "You are allowed to the party";
    }
    return 0;
}