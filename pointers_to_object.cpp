#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData()
    {
        cout << "The value of real part is: " << real << endl;
        cout << "The value of imaginary part is: " << imaginary << endl;
    }
};
int main()
{
    complex c1;
    complex *ptr = new complex; 
    ptr->setData(1, 54);
    (*ptr).getData();
    return 0;
}