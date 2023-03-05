#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;

public:
    void getData()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void display()
    {
        cout << "Feet is: " << feet << endl;
        cout << "Inch is: " << inches << endl;
    }
};
int main()
{
    Distance d;
    d.getData();
    d.display();
    return 0;
}