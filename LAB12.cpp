#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    void setter();
    void getter();
    void display();
};
void Distance::getter()
{
    cout << "Enter the feet: ";
    cin >> feet;
    cout << "Enter the inches: ";
    cin >> inches;
}
void Distance::setter()
{
    while (inches >= 12)
    {
        inches = inches - 12;
        feet++;
    }
}
void Distance::display()
{
    cout << "Feet is: " << feet << endl;
    cout << "Inches is: " << inches << endl;
}
int main()
{
    Distance d;
    d.getter();
    d.setter();
    d.display();

    return 0;
}