#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    int a;
    string b;
    Book(int price = 0, string name = "unkonown")
    {
        a = price;
        b = name;
    }

    void display()
    {
        cout << a << " price:" << b << endl;
    }
};
int main()
{
    Book b1;
    Book b2(100);
    Book b3(100, "the last leasson");

    b1.display();
    b2.display();
    b3.display();

    return 0;
}
