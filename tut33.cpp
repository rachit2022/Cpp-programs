#include <iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int years;
    float intrestrate;
    float returnvalue;

public:
    void show()
    {
        cout << endl
             << "The principal value was: " << principal << endl;
        cout << "The years the money invested is: " << years << endl;
        cout << "The intrest at which is deposited: " << intrestrate << endl;
        cout << "The returnvalue is: " << returnvalue << endl;
    }
    BankDeposit(){};
    BankDeposit(int, int, float);
    BankDeposit(int, int, int);
};
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    intrestrate = r;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + intrestrate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    intrestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + intrestrate);
    }
}
int main()
{
    BankDeposit bd1, bd2, bd3;
    int p;
    int y;
    float r;
    int R;
    cout << "Enter the value of p,y and r: " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    cout << "Enter the value of p,y and R: " << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}