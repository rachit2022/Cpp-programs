#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 74, 12, 4, 85, 96, 24};
    sort(arr, arr + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}