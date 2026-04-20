#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    Student *ptr = &s;

    ptr->name = "Krish";
    ptr->marks = 95;

    ptr->display();

    return 0;
}