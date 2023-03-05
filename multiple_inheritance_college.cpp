#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};
void student::set_roll_number(int r)
{
    roll_number = r;
}
void student::get_roll_number()
{
    cout << "Your roll number is: " << roll_number << endl;
}
class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam::get_marks()
{
    cout << "The marks in maths are: " << maths << endl;
    cout << "The marks in physics are: " << physics << endl;
}
class result : public Exam
{
protected:
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is: " << (maths + physics) / 2 << endl;
    }
};
int main()
{
    result rachit;
    rachit.set_roll_number(32);
    rachit.set_marks(98.0, 90.0);
    rachit.display();
    return 0;
}