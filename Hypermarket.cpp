#include <iostream>
#include <fstream>
using namespace std;
class shopping
{
private:
    int pcode;
    float price;
    float dis;
    string pname;

public:
    void menu();
    void administration();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};
void shopping::menu()
{
m:
    int choice;
    string email;
    string password;
    cout << "\t\t\t\t**************************************" << endl;
    cout << "\t\t\t\t                                      " << endl;
    cout << "\t\t\t\t_________Supermarket Main Menu________" << endl;
    cout << "\t\t\t\t                                      " << endl;
    cout << "\t\t\t\t**************************************" << endl;
    cout << "\t\t\t\t                                      " << endl;
    cout << "\t\t\t\t|   1) Administrator    |" << endl;
    cout << "\t\t\t\t|                       |" << endl;
    cout << "\t\t\t\t|   2) Buyer            |" << endl;
    cout << "\t\t\t\t|                       |" << endl;
    cout << "\t\t\t\t|   3) Exit             |" << endl;
    cout << "\t\t\t\t|                       |" << endl;
    cout << "\n\t\t\t Please select!";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "\t\t\t Please login " << endl;
        cout << "\t\t\t Enter Email  " << endl;
        cin >> email;
        cout << "\t\t\t Password     " << endl;
        cin >> password;
        if (email == "rachitrajgupta2020@gmail.com" && password == "rachit@123")
        {
            administration();
        }
        else
        {
            cout << "Invalid email/password" << endl;
        }
        break;
    case 2:
        buyer();
    case 3:;
        exit(0);
    default:
        cout << "Please select from the given options" << endl;
    }
    goto m;
}
void shopping::administration()
{
m:
    int choice;
    cout << "\n\n\n\t\t\t Administrator menu";
    cout << "\n\t\t\t|_____1) Add the product_____|";
    cout << "\n\t\t\t|                            |";
    cout << "\n\t\t\t|_____2) Modify the product__|";
    cout << "\n\t\t\t|                            |";
    cout << "\n\t\t\t|_____3) Delete the product__|";
    cout << "\n\t\t\t|                            |";
    cout << "\n\t\t\t|_____4) Back to main menu___|";
    cout << "\n\n\t Please enter your choice ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        rem();
        break;
    case 4:
        menu();
        break;
    default:
        cout << "Invalid choice!";
    }
    goto m;
}
void shopping::buyer()
{
m:
    int choice;
    cout << "\t\t\t Buyer        " << endl;
    cout << "********************" << endl;
    cout << "\t\t\t1) Buy product" << endl;
    cout << "                    " << endl;
    cout << "\t\t\t2) Go back    " << endl;
    cout << "\t\t\t Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        receipt();
        break;
    case 2:
        menu();
        break;
    default:
        cout << "Invalid choice!";
    }
    goto m;
}
void shopping::add()
{
m:
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;
    cout << "\n\n\t\t Add new product";
    cout << "\n\n Product code of the product ";
    cin >> pcode;
    cout << "\n\n Name of the product ";
    cin >> pname;
    cout << "\n\n\t Price of the product ";
    cin >> price;
    cout << "\n\n\t Discout on product ";
    cin >> dis;
    data.open("database.txt", ios::in);
    if (!data)
    {
        data.open("database.txt", ios::app | ios::out);
        data << " " << pcode << " " << pname << " " << price << " " << dis << endl;
        data.close();
    }
    else
    {
        data >> c >> n >> p >> d;
        while (!data.eof())
        {
            if (c == pcode)
            {
                token++;
            }
            data >> c >> n >> p >> d;
        }
        data.close();

        if (token == 1)
        {
            goto m;
        }
        else
        {
            data.open("database.txt", ios::app | ios::out);
            data << " " << pcode << " " << pname << " " << price << " " << dis << endl;
            data.close();
        }
    }
    cout << "\n\n\t\t Record Inserted!";
}
void shopping::edit()
{
    fstream data, data1;
    int pkey;
    int c;
    int token = 0;
    float p;
    float d;
    string n;
    cout << "\n\t\t\t Modify the record";
    cout << "\n\t\t\t Product code: ";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\n File dosen't exist!";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> pname >> price >> dis;
        while (!data.eof())
        {
            if (pkey == pcode)
            {
                cout << "\n\t\t Product new code: ";
                cin >> c;
                cout << "\n\t\t Name of the product: ";
                cin >> n;
                cout << "\n\t\t Price: ";
                cin >> p;
                cout << "\n\t\t Discount: ";
                cin >> d;
                data1 << c << " " << n << " " << p << " " << d << endl;
                cout << "\n\n\t\t Record Edited";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis << endl;
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");
        if (token == 0)
        {
            cout << "\n\n Record not found sorry!";
        }
    }
}
void shopping::rem()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    cout << "\n\n\t Delete product";
    cout << "\n\n\t Product code: ";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\n\tFile dosen't exist";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> pname >> price >> dis;
        while (!data.eof())
        {
            if (pcode == pkey)
            {
                cout << "\n\n\t Product deleted succesfully";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis << endl;
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");
        if (token == 0)
        {
            cout << "\n\n Record can't be found";
        }
    }
}
void shopping::list()
{
    fstream data;
    data.open("database.txt", ios::in);
    cout << "\n\n***********************************************" << endl;
    cout << "ProNO\tName\t\tprice" << endl;
    cout << "\n\n***********************************************" << endl;
    data >> pcode >> pname >> price >> dis;
    while (!data.eof())
    {
        cout << pcode << "\t\t" << pname << "\t\t" << price << endl;
        data >> pcode >> pname >> price >> dis;
    }
    data.close();
}
void shopping::receipt()
{
    fstream data;
    int arrc[100];
    int arrq[100];
    char choice;
    int c = 0;
    float amount = 0;
    float dis = 0;
    float total = 0;
    cout << "\n\n\t\t\t\t RECEIPT";
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\n Empty database";
    }
    else
    {
        data.close();
        list();
        cout << "\n************************************" << endl;
        cout << "\n                                    " << endl;
        cout << "\n        Please place the order      " << endl;
        cout << "\n                                    " << endl;
        cout << "\n************************************" << endl;
        do
        {
        m:
            cout << "\n\n Enter product code: ";
            cin >> arrc[c];
            cout << "\n\n Enter the product quantity: ";
            cin >> arrq[c];
            for (int i = 0; i < c; i++)
            {
                if (arrc[c] == arrc[i])
                {
                    cout << "\n\n Duplicate product code. Please try again!";
                    goto m;
                }
            }
            c++;
            cout << "\n\n Do you want to buy another product? if yes then press y else n for no: ";
            cin >> choice;
        } while (choice == 'y');
        cout << "\n\n\t\t\t_________________RECEIPT____________________" << endl;
        cout << "\nProduct No\tProduct Name\tProduct quantity\tPrice\tAmount\tAmount with discount" << endl;
        for (int i = 0; i < c; i++)
        {
            data.open("database.txt", ios::in);
            data >> pcode >> pname >> price >> dis;
            while (!data.eof())
            {
                if (pcode == arrc[i])
                {
                    amount = price * arrq[i];
                    dis = amount - (amount * dis / 100);
                    total = total + dis;
                    cout << endl
                         << pcode << "\t\t" << pname << "\t\t" << arrq[i] << "\t\t" << price << "\t" << amount << "\t\t" << dis;
                }
                data >> pcode >> pname >> price >> dis;
            }
        }
        data.close();
    }
    cout << "\n\n______________________________________________";
    cout << "\n Total Amount: " << total << endl;
}
int main()
{
    shopping s;
    s.menu();
}