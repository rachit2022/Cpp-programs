#include <iostream>
using namespace std;
template <class T>
class Rachit
{
public:
    T data;
    Rachit(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Rachit<T>::display()
{
    cout << "The value of data is: " << data << endl;
}
int main()
{
    Rachit<int> r(8);
    r.display();
    return 0;
}