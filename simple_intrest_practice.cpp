#include <iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int years;
    float intrestrate;
    int returnvalue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};
BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    intrestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intrestrate);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    intrestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intrestrate);
    }
}
void BankDeposit::show()
{
    cout << "The returnvalue after " << years << " years is: " << returnvalue << endl;
}
int main()
{
    BankDeposit b1, b2, b3;
    int pr;
    int yr;
    float ra;
    int RA;
    cout << "Enter the principal and time and rate: " << endl;
    cin >> pr >> yr >> ra;
    b1 = BankDeposit(pr, yr, ra);
    b1.show();
    cout << "Enter the principal and time and rate: " << endl;
    cin >> pr >> yr >> RA;
    b2 = BankDeposit(pr, yr, RA);
    b2.show();
    return 0;
}