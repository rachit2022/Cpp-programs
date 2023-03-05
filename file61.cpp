#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string st;
    cout << "Enter your name: ";
    cin >> st;
    ofstream hout("sample60.txt");
    hout << "My name is " << st;
    hout.close();
    ifstream hin("sample60.txt");
    string content;
    hin >> content;
    cout << "The content of this file is: " << content;
    hin.close();
    return 0;
}