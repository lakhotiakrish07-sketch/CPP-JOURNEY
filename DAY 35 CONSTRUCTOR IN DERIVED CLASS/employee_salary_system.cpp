#include <iostream>
using namespace std;

class Employee {
public:
    int id;

    Employee(int i) {
        id = i;
    }
};

class Salary : public Employee {
public:
    int salary;

    Salary(int i, int s) : Employee(i) {
        salary = s;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Salary s(101, 50000);
    s.display();
}