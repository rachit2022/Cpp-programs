#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;

public:
    void setData(int f, int i);
    void getData();
};
void Distance::setData(int f, int i)
{
    feet = f;
    inches = i;
}
void Distance::getData()
{
    cout << "The distance in inches is: " << inches << endl;
    cout << "The distance in feet is: " << feet << endl;
}
int main()
{
    Distance d;
    d.setData(4, 5);
    d.getData();
    return 0;
}