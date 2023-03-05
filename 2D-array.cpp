#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n;
    cout << "Enter the row of an matrix: ";
    cin >> n;
    cout << "Enter the coloum of an matrix: ";
    cin >> m;
    int arr[n][m];
    cout << "Entering the element of the matrix:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Displaying the element of the matrix" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}