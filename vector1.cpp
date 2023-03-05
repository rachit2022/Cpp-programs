#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vect1;
    int size;
    int element;
    cout << "Enter the size of vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Element : ";
        cin >> element;
        vect1.push_back(element);
    }
    // vect1.pop_back();
    display(vect1);
    vector<int>::iterator iter = vect1.begin();
    vect1.insert(iter + 1, 566);    // for inserting at second place.
    vect1.insert(iter + 1, 5, 566); // for inserting at five copies at second  place.
    display(vect1);
    return 0;
}