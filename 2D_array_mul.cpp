#include <iostream>
using namespace std;
int main()
{
    int i, j, m1, n1, k, n2, m2;
    cout << "Enter the row of matrix 1: ";
    cin >> n1;
    cout << "Enter the coloum of matrix 1: ";
    cin >> m1;
    int arr[n1][m1];
    cout << "Entering the element of matrix 1: " << endl;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m1; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Displaying matrix 1: " << endl;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the row of matrix 2: ";
    cin >> n2;
    cout << "Enter the coloum of matrix 2: ";
    cin >> m2;
    int arr1[n2][m2];
    cout << "Entering the element of matrix 2: " << endl;
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < m2; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Displaying matrix 2: " << endl;
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < m2; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    int arr2[n1][m2];
    cout << "Multiplying matrix 1 and 2 we get: " << endl;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m2; j++)
        {
            arr2[i][j] = arr[i][j] * arr[i][j];
        }
    }
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m2; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}