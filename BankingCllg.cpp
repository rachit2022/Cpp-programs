#include <iostream>
#include <string.h>
using namespace std;
int i, j, n, k, m, a;
class bank
{
    string name;
    string password;
    int acc_no;
    int balance;

public:
    bank()
    {
        acc_no = 0;
    }
    void create_account();
    void deposit();
    void withdraw();
    void display();
    void transfer(bank);
    void delete_account();
    int generate_account(int i);
    static void sort(bank a[]);
};
int main()
{
    bank b[100];
    cout << "Enter the number of account: ";
    cin >> n;
    do
    {
        int choice;
        cout << "*******************Enter your choice**********************" << endl;
        cout << "*                  1.create_account                      *" << endl;
        cout << "*                  2.withdraw                            *" << endl;
        cout << "*                  3.Transfer                            *" << endl;
        cout << "*                  4.Deposit                             *" << endl;
        cout << "*                  5.Delete_account                      *" << endl;
        cout << "*                  6.Display                             *" << endl;
        cout << "*                  7.Sort                                *" << endl;
        cout << "*                  8.Exit                                *" << endl;
        cout << "**********************************************************" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            for (i = 1; i <= n; i++)
            {
                b[i].create_account();
            }
            break;
        case 2:
            cout << "Enter your account number: ";
            cin >> k;
            b[k].withdraw();
            break;
        case 3:
            cout << "Enter the account number for sender's: ";
            cin >> k;
            cout << "Enter the account number for reciver's: ";
            cin >> m;
            b[k].transfer(b[m]);
            break;
        case 4:
            cout << "Enter the account number you have to deposit: ";
            cin >> k;
            b[k].deposit();
            break;
        case 5:
            cout << "Enter the account number for which you have to delete the account: ";
            cin >> k;
            b[k].delete_account();
            break;
        case 6:
            cout << "Displaying the accounts" << endl;
            for (i = 1; i <= n; i++)
            {
                b[i].display();
            }
            break;
        case 7:
            bank::sort(b);
            break;
        case 8:
            exit(0);
            break;
        default:
            cout << "Choose the correct option" << endl;
        }
        cout << "Press 1 to continue: ";
        cin >> a;
    } while (a == 1);
}
void bank::create_account()
{
    cout << "Enter the detail customer's " << i << ": ";
    cout << "Name: ";
    cin >> name;
    cout << "Password: ";
    cin >> password;
    acc_no = generate_account(i);
    cout << "Account number is: " << acc_no << endl;
    cout << "Balance: ";
    cin >> balance;
}
int bank::generate_account(int i)
{
    acc_no = acc_no + i;
    i++;
    return acc_no;
}
void bank::deposit()
{
    int amount;
    string p;
    cout << "Enter your password: ";
    cin >> p;
    if (p == password)
    {
        cout << "Enter the amount you have to deposit: ";
        cin >> amount;
        balance = balance + amount;
        cout << "Current balance is: " << balance << endl;
    }
    else
    {
        cout << "Incorrect Passowrd!" << endl;
    }
}
void bank::withdraw()
{
    int amount;
    string p;
    cout << "Enter your password: ";
    cin >> p;
    if (p == password)
    {
        cout << "Enter the amount: ";
        cin >> amount;
        if (amount < balance)
        {
            balance = balance - amount;
            cout << "Current balance is: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
    else
    {
        cout << "Incorrect Password!" << endl;
    }
}
void bank::delete_account()
{
    name = "XXX";
    balance = -1;
    acc_no = -1;
}
void bank::transfer(bank a)
{
    int amount;
    string p, k;
    cout << "Enter the password for sender's account: ";
    cin >> p;
    cout << "Enter the password for reciver's account: ";
    cin >> k;
    if (p == password && k == a.password)
    {
        cout << "Enter the amount you want ot transfer: ";
        cin >> amount;
        if (amount < balance)
        {
            a.balance = a.balance + amount;
            balance = balance - amount;
            cout << "Current balance of reciver is: " << a.balance << endl;
            cout << "Current balance of sender is: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balanace!" << endl;
        }
    }
    else
    {
        cout << "Incorret password!" << endl;
    }
}
void bank::sort(bank b[])
{
    int i, j;
    bank temp;
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (b[i].balance > b[j].balance)
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        b[i].display();
    }
}
void bank::display()
{
    cout << "Customer's details" << endl;
    cout << "Name: " << name << endl;
    cout << "Password: " << password << endl;
    cout << "Balance:" << balance << endl;
    cout << "Account number: " << acc_no << endl;
}