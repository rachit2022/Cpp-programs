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
    Distance(int a, int b)
    {
        feet = a;
        inches = b;
    }
    void getter();
    Distance setter(Distance);
    void display();
};
void Distance::getter()
{
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
}
Distance Distance::setter(Distance d)
{
    Distance temp;
    temp.inches = inches + d.inches;
    while (temp.inches >= 12)
    {
        temp.inches = temp.inches - 12;
        temp.feet++;
    }
    temp.feet = feet + d.feet + temp.feet;
    return temp;
}
void Distance::display()
{
    cout << "Feet is: " << feet << endl;
    cout << "Inches is: " << inches << endl;
}
int main()
{
    Distance d, d1(1, 1), d2;
    d.getter();
    d2 = d.setter(d2);
    d2.display();
    return 0;
}