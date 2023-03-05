#include <iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;

public:
    void getData()
    {
        cout << "Code of this item is: " << id << endl;
        cout << "price of this item is: " << price << endl;
    }
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
};
int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrtemp = ptr;
    int i, c;
    float d;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item: " << endl;
        cin >> c >> d;
        ptr->setData(c, d);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        ptrtemp->getData();
        ptrtemp++;
    }
    return 0;
}