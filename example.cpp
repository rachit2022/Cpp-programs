#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    cin >> a;
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            cout << word[i] << endl;
        }
        else if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << "even";
            }
            else
            {
                cout << "odd";
            }
        }
    }
    return 0;
}