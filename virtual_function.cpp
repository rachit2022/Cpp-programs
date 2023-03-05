#include <iostream>
using namespace std;
class Baseclass
{
public:
    int var_base;
    virtual void display()
    {
        cout << "The value of var_base of base class is: " << var_base << endl;
    }
};
class Derivedclass : public Baseclass
{
public:
    int var_derived = 100;
    void display()
    {
        cout << "The value of var_base of base class is: " << var_base << endl;
        cout << "The value of var_derived of derived class is: " << var_derived << endl;
    }
};
int main()
{
    Baseclass *Base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    Base_class_pointer = &obj_derived;
    Base_class_pointer->var_base = 34;
    Base_class_pointer->display();
    return 0;
}