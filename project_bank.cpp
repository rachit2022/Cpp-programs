#include <iostream>
#include <string.h>
using namespace std;
int i, j, n, choice, c, k, m;
class bank
{
    int acc_no;
    string name;
    string password;
    int balance;

public:
    bank()
    {
        acc_no = 0;
    }
    void create_account();
    int generate_account_number(int i);
    void deposit();
    void transfer(bank);
    void withdraw();
    void delete_account();
    static void sort(bank a[]);
    void display();
};
int bank::generate_account_number(int i)
{
    acc_no = acc_no + i;
    i++;
    return acc_no;
}
void bank::create_account()
{
    cout << "Enter the account holder name: ";
    cin >> name;
    acc_no = generate_account_number(i);
    cout << "Your account number is: " << acc_no << endl;
    cout << "Create your password: ";
    cin >> password;
    cout << "Enter some amount to open your account: ";
    cin >> balance;
}
void bank::deposit()
{
    string p;
    cout << "Enter the password: ";
    cin >> p;
    if (p == password)
    {
        int amount;
        cout << "Enter the amount you want to deposit: ";
        cin >> amount;
        balance = balance + amount;
        cout << "Your current balance is: " << balance << endl;
    }
    else
    {
        cout << "Incorrect password\n";
    }
}
void bank::withdraw()
{
    string p;
    cout << "Enter the password: ";
    cin >> p;
    if (p == password)
    {
        int amount;
        cout << "Enter the amount you have to withdraw: ";
        cin >> amount;
        if (balance > amount)
        {
            balance = balance - amount;
            cout << "Your currrent balance is: " << balance << endl;
            ;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }
    else
    {
        cout << "Incorrect password" << endl;
    }
}
void bank::transfer(bank a)
{
    string p, q;
    cout << "Enter the password for sender's account: ";
    cin >> p;
    cout << "Enter the password for reciver's account: ";
    cin >> q;
    if (p == password && q == a.password)
    {
        int amount;
        cout << "Enter the amount you have to transfer: ";
        cin >> amount;
        if (balance > amount)
        {
            balance = balance - amount;
            a.balance = a.balance + amount;
            cout << "The balance of sender's accout is: " << balance << endl;
            cout << "The balance od the reciver's account is: " << a.balance << endl;
        }
        else
        {
            cout << "The sender's have an insufficient balance" << endl;
        }
    }
    else
    {
        cout << "Incorrect password" << endl;
    }
}
void bank::delete_account()
{
    name = "XXX";
    acc_no = -1;
    balance = -1;
}
void bank::sort(bank b[])
{
    bank temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (b[i].balance < b[j].balance)
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        b[i].display();
    }
}
void bank::display()
{
    cout << "Name is: " << name << endl;
    cout << "Account number is: " << acc_no << endl;
    cout << "Balance is: " << balance << endl;
}
int main()
{
    cout << "Enter the number of members: ";
    cin >> n;
    bank b[n];
    do
    {
        cout << "Enter your choice: 1.create_account\n 2.Deposit\n 3.withdraw\n 4.transfer\n 5.sort\n 6.delete_account\n 7.Display\n 8.Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                b[i].create_account();
            }
            break;
        case 2:
            cout << "Enter the account number of account to deposit money: ";
            cin >> k;
            b[k].deposit();
            break;
        case 3:
            cout << "Enter the account number of account to transfer money: ";
            cin >> k;
            b[k].withdraw();
            break;
        case 4:
            cout << "Enter the account number of the sender's account: ";
            cin >> k;
            cout << "Enter the account number of the reciver's account: ";
            cin >> m;
            b[k].transfer(b[m]);
            break;
        case 5:
            bank::sort(b);
            break;
        case 6:
            cout << "Enter the account number of the account you want to delete: ";
            cin >> k;
            b[k].delete_account();
            break;
        case 7:
            for (i = 0; i < n; i++)
            {
                b[i].display();
            }
        default:
            return 0;
        }
        cout << "Press 1 to continue: ";
        cin >> c;
    } while (c == 1);
    return 0;
}
