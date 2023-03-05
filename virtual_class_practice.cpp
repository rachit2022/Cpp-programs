#include <iostream>
using namespace std;
class student
{
protected:
    int roll_num;

public:
    void set_roll_number(int r)
    {
        roll_num = r;
    }
    void show_roll_number()
    {
        cout << "Your roll number is: " << roll_num << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void show_marks()
    {
        cout << "Your maths marks is: " << maths << endl;
        cout << "Your physics marks is: " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void show_score()
    {
        cout << "Your score is: " << score << endl;
    }
};
class result : public test, public sports
{
protected:
    float total;

public:
    void show_result()
    {
        total = maths + physics + score;
        cout << "Your total score is: " << total << endl;
    }
};
int main()
{
    result r;
    r.set_roll_number(4200);
    r.set_marks(78.5, 85.4);
    r.set_score(99);
    r.show_roll_number();
    r.show_score();
    r.show_marks();
    r.show_result();
    return 0;
}