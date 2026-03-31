#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    int id;
    string name;
    float marks;

    // Default Constructor
    Student() {
        id = 0;
        name = "Unknown";
        marks = 0;
    }

    // Parameterized Constructor
    Student(int i, string n, float m) {
        id = i;
        name = n;
        marks = m;
    }

    void display() {
        cout << "ID: " << id 
             << ", Name: " << name 
             << ", Marks: " << marks << endl;
    }
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n1. Add Student\n2. Display All\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string name;
            float marks;

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Marks: ";
            cin >> marks;

            // Using Parameterized Constructor
            Student s(id, name, marks);
            students.push_back(s);
        }
        else if (choice == 2) {
            for (auto s : students) {
                s.display();
            }
        }

    } while (choice != 3);

    return 0;
}