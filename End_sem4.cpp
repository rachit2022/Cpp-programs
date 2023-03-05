#include <iostream>
#include <string.h>
using namespace std;
int i, j, n, an, ans;
class Bank
{
    string name;
    string password;
    int acc_no;
    int balance;

public:
    Bank()
    {
        acc_no = 0;
    }
    void create_account();
    void withdraw();
    void delete_account();
    void deposit();
    void transfer(Bank);
    int generate_account(int i);
    void display();
    static void sort(Bank a[]);
};
void Bank::create_account()
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your password: ";
    cin >> password;
    cout << "Enter your balance: ";
    cin >> balance;
    acc_no = generate_account(i);
    cout << "Account number is: " << acc_no << endl;
}
void Bank::deposit()
{
    string p;
    cout << "Enter your correct password: ";
    cin >> p;
    if (p == password)
    {
        int amount;
        cout << "Enter the amount you have to deposit: ";
        cin >> amount;
        balance = balance + amount;
        cout << "Current balance is: " << balance << endl;
    }
    else
    {
        cout << "Incorrect password!!" << endl;
    }
}
void Bank::withdraw()
{
    string p;
    cout << "Enter your correct password: ";
    cin >> p;
    if (p == password)
    {
        int amount;
        cout << "Enter the amount you have to withdraw: ";
        cin >> amount;
        if (balance >= amount)
        {
            balance = balance - amount;
            cout << "Current balance is: " << balance << endl;
        }
        else
        {
            cout << "Insufficient Balance!!" << endl;
        }
    }
    else
    {
        cout << "Incorrect password!!" << endl;
    }
}
void Bank::delete_account()
{
    name = "xxx";
    balance = -1;
    acc_no = -1;
}
void Bank::transfer(Bank b)
{
    string p, q;
    cout << "Enter the password for the sender's account: ";
    cin >> p;
    cout << "Enter the password for the reciver's account: ";
    cin >> q;
    if (p == password && q == b.password)
    {
        int amount;
        cout << "Enter the amount you have to transfer: ";
        cin >> amount;
        if (balance >= amount)
        {
            balance = balance - amount;
            b.balance = b.balance + amount;
            cout << "Current balance for sender's account: " << balance << endl;
            cout << "Current balance for reciver's account: " << b.balance << endl;
        }
        else
        {
            cout << "Insufficient Balance!!" << endl;
        }
    }
    else
    {
        cout << "Incorrect passowrd!!" << endl;
    }
}
int Bank::generate_account(int i)
{
    acc_no = acc_no + i;
    i++;
    return acc_no;
}
void Bank::display()
{
    cout << "Name is: " << name << endl;
    cout << "Account number is: " << acc_no << endl;
    cout << "Balance is: " << balance << endl;
    cout << "Password is: " << password << endl;
}
void Bank::sort(Bank b[])
{
    Bank temp;
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (b[j].balance < b[i].balance)
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
int main()
{
    Bank b[100];
    int choice, a;
    cout << "Enter the number of accounts you wwant: ";
    cin >> n;
    do
    {
        cout << "Enter your choice" << endl;
        cout << "1.Create account" << endl;
        cout << "2.Deposit" << endl;
        cout << "3.Withdraw" << endl;
        cout << "4.Transfer" << endl;
        cout << "5.Delete account" << endl;
        cout << "6.Sort" << endl;
        cout << "7.Display" << endl;
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
            cin >> an;
            b[an].deposit();
            break;
        case 3:
            cout << "Enter your account number: ";
            cin >> an;
            b[an].withdraw();
            break;
        case 4:
            cout << "Enter sender's account number: ";
            cin >> an;
            cout << "Enter reciver's account number: ";
            cin >> ans;
            b[an].transfer(b[ans]);
            break;
        case 5:
            cout << "Enter your account number: ";
            cin >> an;
            b[an].delete_account();
            break;
        case 6:
            Bank::sort(b);
            break;
        case 7:
            for (i = 1; i <= n; i++)
            {
                b[i].display();
            }
            break;
        default:
            cout << "Enter the correct choice!!!!" << endl;
        }
        cout << "Press 1 to contiune: ";
        cin >> a;
    } while (a == 1);
    return 0;
}