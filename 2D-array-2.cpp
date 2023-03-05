#include <iostream>
using namespace std;
int main()
{
    int row, coloum, i, j, sum = 0, sum2 = 0;
    cout << "Enter the row of the matrix: ";
    cin >> row;
    cout << "Enter the coloum of the matrix: ";
    cin >> coloum;
    int arr[row][coloum];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < coloum; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Displaying the element os the matrix: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < coloum; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < coloum; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < coloum; j++)
        {
            if (arr[i] == arr[j])
            {
                sum = sum + arr[i][j];
            }
        }
    }
    cout << "The sum is: " << sum << endl;
    for (i = 0; i < row; i++)
    {
        for (j = coloum; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i][row - 1 - i] << " ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (i = 0; i < row; i++)
    {
        for (j = coloum; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                sum2 = sum2 + arr[i][row - 1 - i];
            }
        }
    }
    cout << "The sum2 is: " << sum2 << endl;
    return 0;
}