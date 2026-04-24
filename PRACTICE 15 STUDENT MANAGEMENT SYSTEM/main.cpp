#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;

    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;

        if (marks > 90) {
            cout << "Status: Topper" << endl;
        }
    }
};

int main() {
    Student *s = new Student;   // dynamic object

    s->input();    // take input
    s->display();  // display output

    delete s;      // free memory

    return 0;
}