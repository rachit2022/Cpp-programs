#include <iostream>
using namespace std;
int main()
{
    int arr[100][100], n, i, j, k, sum1 = 0, sum2 = 0;
    k = n - 1;
    cout << "Dimension: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter element arr" << i + 1 << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
    cout << "\n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == i)
            {
                cout << arr[i][j];
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j >= 0; j--)
        {
            if (i == j)
            {
                cout << arr[i][n - 1 - i];
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == i)
            {
                sum1 = sum1 + arr[i][j];
            }
        }
    }
    cout << "Sum(left to right): " << sum1;
    cout << "\n";

    for (i = 0; i < n; i++)
    {
        sum2 = sum2 + arr[i][n - 1 - i];
    }
    cout << "Sum(right to left): " << sum2;

    return 1;
}