#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;

public:
    void setData()
    {
        cout << "Enter the feet: ";
        cin >> feet;
        cout << "Enter the inches: ";
        cin >> inches;
    }
    void getData()
    {
        cout << "Feet is: " << feet << endl;
        cout << "Inches is: " << inches << endl;
    }
};
int main()
{
    Distance d;
    d.setData();
    d.getData();
    return 0;
}