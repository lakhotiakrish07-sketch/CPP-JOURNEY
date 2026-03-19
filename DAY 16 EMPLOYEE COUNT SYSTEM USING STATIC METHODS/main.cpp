#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    static int count;

    void setid()
    {
        cout << "enter id of employee: " << endl;
        cin >> id;
        count++;
    }

    static void show()
    {
        cout << "total numeber of employee:" << count << endl;
    }
};
int Employee ::count = 0; // initialising count as 0 only done here
int main()
{
    Employee krish, aman, aditya, raj, lambu;
    krish.setid();
    aman.setid();
    aditya.setid();
    raj.setid();
    lambu.setid();
    Employee::show();

    return 0;
}
