#include <iostream>
using namespace std;
class Shop
{
    int item_id[1000];
    int item_price[1000];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void set_id();
    void show_items();
};
void Shop ::set_id()
{
    cout << "enter a id number:" << endl;
    cin >> item_id[counter];
    cout << "enter price :" << endl;
    cin >> item_price[counter];
    counter++;
}
void Shop ::show_items()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "item id: " << item_id[i] << endl
             << "item price: " << item_price[i] << endl;
    }
}
int main()
{
    Shop s1;
    s1.initcounter();
    s1.set_id();
    s1.set_id();
    s1.set_id();
    s1.show_items();
    return 0;
}
//use right click and format document for better readibility