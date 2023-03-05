#include <iostream>
using namespace std;
class Distance
{
    float feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int a, float b)
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
    cout << "Enter the inch: ";
    cin >> inches;
    cout << "Enter the feet: ";
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
    cout << "Your distance in inches is: " << inches << endl;
    cout << "Your distance in feet is: " << feet << endl;
}
int main()
{
    Distance d1, d2(1, 1.1), d3(2, 2.1), d4;
    d1.getter();
    d4 = d3.setter(d1, d2);
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    return 0;
}