#include <iostream>
using namespace std;
class Distance
{
    int inches;
    int feet;

public:
    Distance()
    {
        inches = 0;
        feet = 0;
    }
    Distance(int a, int b)
    {
        inches = a;
        feet = b;
    }
    void getter();
    Distance setter(Distance, Distance);
    void display();
};
void Distance::getter()
{
    cout << "Enter your inches: ";
    cin >> inches;
    cout << "Enter your feet: ";
    cin >> feet;
}
Distance Distance::setter(Distance d1, Distance d2)
{
    Distance temp;
    temp.inches = inches + d1.inches + d2.inches;
    while (temp.inches >= 12)
    {
        temp.inches = temp.inches - 12;
        temp.feet++;
    }
    temp.feet = feet + d1.feet + d2.feet;
    return temp;
}
void Distance::display()
{
    cout << "Inches is: " << inches << endl;
    cout << "Feet is: " << feet << endl;
}
int main()
{
    Distance d1, d2(4, 5), d3(6, 7), d4;
    d1.getter();
    d4 = d3.setter(d1, d2);
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    return 0;
}