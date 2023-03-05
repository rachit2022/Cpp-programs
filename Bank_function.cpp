#include <iostream>
using namespace std;
int n, i, k, m, s;
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
    void deposit();
    int generate_acc_no(int i);
    void withdraw();
    void transfer(bank);
    void display();
    static void sort(bank a[]);
    void delete_account();
};
int main()
{
    bank b[100];
    cout << "Enter the number of customers: ";
    cin >> n;
    int choice;
    do
    {
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
            for (i = 0; i < n; i++)
            {
                b[i].display();
            }
            break;
        case 3:
            cout << "Enter the account number: ";
            cin >> k;
            b[k].deposit();
            break;
        case 4:
            cout << "Enter the account number: ";
            cin >> k;
            b[k].withdraw();
            break;
        case 5:
            cout << "Enter the account number from which money has to be debited: ";
            cin >> k;
            cout << "Enter the account number to which money has to be credited: ";
            cin >> m;
            b[k].transfer(b[m]);
        case 6:
            cout << "Enter the account number to be displayed: ";
            cin >> k;
            b[k].display();
            break;
        case 7:
            bank::sort(b);
            break;
        case 8:
            cout << "Enter the account number to be deleted: ";
            cin >> k;
            b[k].delete_account();
            break;
        default:
            exit(0);
        }
        cout << "Press 1 to continue: ";
        cin >> s;
    } while (s == 1);
    return 0;
}
void bank::create_account()
{
    cout << "Enter " << i + 1 << " customer's details" << endl;
    cout << "Name: ";
    cin >> name;
    acc_no = generate_acc_no(i);
    cout << "password: ";
    cin >> password;
    cout << "Balance: ";
    cin >> balance;
}
int bank::generate_acc_no(int i)
{
    acc_no = acc_no + i;
    i++;
    return acc_no;
}
void bank::display()
{
    cout << "Customer details: " << endl;
    cout << "Name: " << name << endl;
    cout << "Account number: " << acc_no << endl;
    cout << "Balance: " << balance << endl;
}
void bank::deposit()
{
    string p;
    int amount;
    cout << "Enter the password: ";
    cin >> p;
    if (p == password)
    {
        cout << "Enter the amount: ";
        cin >> amount;
        balance = balance + amount;
        cout << "Balance: " << balance << endl;
    }
    else
    {
        cout << "Incorrect password!!" << endl;
    }
}
void bank::withdraw()
{
    string p;
    int amount;
    cout << "Enter the password: ";
    cin >> p;
    if (p == password)
    {
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        if (balance > amount)
        {
            balance = balance - amount;
            cout << "Remaining Balance: " << balance;
        }
        else
        {
            cout << "Insufficient Balance...!!" << endl;
        }
    }
    else
    {
        cout << "Incorrect password....!!" << endl;
    }
}
void bank::transfer(bank a)
{
    int amount;
    string p, q;
    cout << "Enter the password for sender's account: ";
    cin >> p;
    cout << "Enter the password for reciver's account: ";
    cin >> q;
    if (p == password && q == a.password)
    {
        cout << "Enter the amount to be transfer: ";
        cin >> amount;
        if (balance > amount)
        {
            a.balance = a.balance + amount;
            balance = balance - amount;
            cout << "Sender's balance: " << balance << endl;
            cout << "Reciver's balance: " << a.balance << endl;
        }
        else
        {
            cout << "Insufficient balance....!!" << endl;
        }
    }
    else
    {
        cout << "Incorrect password...!!" << endl;
    }
}
void bank::sort(bank b[])
{
    int i, j;
    bank temp;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
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
void bank::delete_account()
{
    name = "XXX";
    acc_no = -1;
    balance = -1;
}
