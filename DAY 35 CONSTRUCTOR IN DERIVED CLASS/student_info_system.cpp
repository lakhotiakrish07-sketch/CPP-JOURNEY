#include <iostream>
using namespace std;

class Person {
public:
    string name;

    Person(string n) {
        name = n;
    }
};

class Student : public Person {
public:
    int marks;

    Student(string n, int m) : Person(n) {
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s("Krish", 90);
    s.display();
}