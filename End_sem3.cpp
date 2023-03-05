#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;

public:
    void setData(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void display()
    {
        cout << "Feet is: " << feet << endl;
        cout << "Inches is: " << inches << endl;
    }
};
int main()
{
    Distance d;
    d.setData(5, 6);
    d.display();
    return 0;
}