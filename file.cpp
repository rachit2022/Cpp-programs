#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string st = "Rachit bhai";
    string st2;
    ofstream out("sample60.txt");
    out << st;
    ifstream in("sample60b.txt");
    getline(in, st2);
    cout << st2;
    return 0;
}