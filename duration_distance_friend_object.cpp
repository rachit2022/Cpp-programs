#include <iostream>
using namespace std;
class Distance
{
private:
    int meter;
    int hour;
    int minute;
    int second;
    friend int distance(Distance);
    friend int hours(Distance);
    friend int seconds(Distance);
    friend int minutes(Distance);

public:
    Distance()
    {
        hour = 0;
        minute = 0;
        second = 0;
        meter = 0;
    }
};
int distance(Distance d)
{
    d.meter = 5;
    return d.meter;
}
int hours(Distance d)
{
    d.hour = 12;
    return d.hour;
}
int seconds(Distance d)
{
    d.second = 45;
    return d.second;
}
int minutes(Distance d)
{
    d.minute = 25;
    return d.minute;
}
int main()
{
    Distance D;
    cout << "Distance: " << distance(D) << endl;
    cout << "Hour is: " << hours(D) << endl;
    cout << "Minute is: " << minutes(D) << endl;
    cout << "Second is: " << seconds(D) << endl;
    return 0;
}