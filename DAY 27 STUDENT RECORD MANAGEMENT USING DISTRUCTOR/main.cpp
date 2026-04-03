#include <iostream>
using namespace std;

class Student {
    string name;
    int *marks;

public:
    Student(string n, int m) {
        name = n;
        marks = new int(m);
        cout << "Constructor: " << name << endl;
    }

    void display() {
        cout << "Name: " << name << ", Marks: " << *marks << endl;
    }

    ~Student() {
        delete marks;
        cout << "Destructor: " << name << endl;
    }
};

int main() {
    Student s1("Krish", 90);
    s1.display();

    Student s2("Rahul", 85);
    s2.display();

    return 0;
}