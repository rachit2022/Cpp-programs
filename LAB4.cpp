#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;

public:
    void setData();
    void getData();
};
void Distance::getData()
{
    cout << "Enter inch: ";
    cin >> inches;
    cout << "Enter feet: ";
    cin >> feet;
}
void Distance::setData()
{
    cout << "Feet is: " << feet << endl;
    cout << "Inch is: " << inches << endl;
}
int main()
{
    Distance d;
    d.getData();
    d.setData();
    return 0;
}