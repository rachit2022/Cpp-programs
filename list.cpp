#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lt)
{
    list<int>::iterator it;
    for (it = lt.begin(); it != lt.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);
    list1.push_back(40);
    list1.push_back(50);
    list1.push_back(60);
    display(list1);
    list<int> list2(3);
    list<int>::iterator iter = list2.begin();
    *iter = 70;
    iter++;
    *iter = 80;
    iter++;
    *iter = 90;
    iter++;
    display(list2);
    list1.merge(list2);
    display(list1);
    return 0;
}