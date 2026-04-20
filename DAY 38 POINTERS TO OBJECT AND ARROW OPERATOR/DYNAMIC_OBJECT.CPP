#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    int salary;

    void display() {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee *e = new Employee;

    e->id = 101;
    e->salary = 50000;

    e->display();

    delete e;

    return 0;
}