#include <iostream>
using namespace std;
int i, j, n, k, s, r;
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
    void withdraw();
    void transfer(bank);
    void deposit();
    void delete_account();
    static void sort(bank a[]);
    void display();
    int generate_account(int i);
} b[100], temp;
void bank::create_account()
{
    cout << "Enter the detail of " << i << ": " << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter password: ";
    cin >> password;
    cout << "Account number is: " << generate_account(i) << endl;
    cout << "Enter balance: ";
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
        cout << "Incorrect password!" << endl;
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
        cout << "Enter the amount you have to withdraw: ";
        cin >> amount;
        if (amount < balance)
        {
            balance = balance - amount;
            cout << "Current balance is: " << balance << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }
    else
    {
        cout << "Incorrect password!" << endl;
    }
}
void bank::display()
{
    cout << "Name is: " << name << endl;
    cout << "Account no: " << acc_no << endl;
    cout << "Password is: " << password << endl;
    cout << "Balance is: " << balance << endl;
}
void bank::transfer(bank a)
{
    int amount;
    string se, re;
    cout << "Enter the passowrd for the sender account: ";
    cin >> se;
    cout << "Enter the password for the reciver account: ";
    cin >> re;
    if (se == password && re == a.password)
    {
        cout << "Enter the amount you have to transfer: ";
        cin >> amount;
        if (amount < balance)
        {
            balance = balance - amount;
            a.balance = a.balance + amount;
            cout << "Sender's current balance: " << balance << endl;
            cout << "Reciver's current balance: " << a.balance << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
    else
    {
        cout << "Incorrect password!" << endl;
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
}
int main()
{
    cout << "Enter the number of accounts: ";
    cin >> n;
    int choice, a;
    do
    {
        cout << "Enter your choice" << endl
             << "1.Create account" << endl
             << "2.Withdraw" << endl
             << "3.Transfer" << endl
             << "4.Deposit" << endl
             << "5.Delete Account" << endl
             << "6.sort" << endl
             << "7.Display" << endl;
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
            cout << "Enter the account number: ";
            cin >> k;
            b[k].withdraw();
            break;
        case 3:
            cout << "Enter sender's account number: ";
            cin >> s;
            cout << "Enter reciver's account number: ";
            cin >> r;
            b[s].transfer(b[r]);
            break;
        case 4:
            cout << "Enter the account number: ";
            cin >> k;
            b[k].deposit();
            break;
        case 5:
            cout << "Enter the account number: ";
            cin >> k;
            b[k].delete_account();
            break;
        case 6:
            bank::sort(b);
            break;
        case 7:
            for (i = 1; i <= n; i++)
            {
                b[i].display();
            }
            break;
        default:
            cout << "Enter the correct option" << endl;
        }
        cout << "Press 1 to contiune: ";
        cin >> a;
    } while (a == 1);
    return 0;
}