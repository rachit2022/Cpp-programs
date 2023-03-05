#include <iostream>
using namespace std;
int main()
{
    int a[3][3], i, j, k, c = 0, f = 0, mini, maxi;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter element [" << i << "] [" << j << "]";
            cin >> a[i][j];
        }
    }
    cout << "Matrix is...." << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (i = 0; i < 3; i++)
    {
        mini = a[i][0];
        c = 0;
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < mini)
            {
                mini = a[i][j];
                c = j;
            }
        }
        maxi = a[0][c];
        for (k = 0; k < 3; k++)
        {
            if (a[k][c] > maxi)
            { 
                maxi = a[k][c];
            }
        }
        if (mini == maxi)
        {
            f = 1;
            cout << "Saddle point of matrix is: " << mini;
        }
    }
    if (f == 0)
    {
        cout << "No saddle point";
    }
}