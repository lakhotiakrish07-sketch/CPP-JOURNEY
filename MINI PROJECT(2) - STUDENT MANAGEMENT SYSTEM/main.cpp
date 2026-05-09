#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float marks;

public:
    void addStudent() {
        cout << "Enter Student ID: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Student Marks: ";
        cin >> marks;
    }

    void displayStudent() const {
        cout << "\nID    : " << id;
        cout << "\nName  : " << name;
        cout << "\nMarks : " << marks << endl;
    }

    int getId() const {
        return id;
    }

    void updateMarks(float newMarks) {
        marks = newMarks;
    }
};

int main() {
    Student students[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student by ID";
        cout << "\n4. Update Student Marks";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            Student s;
            s.addStudent();
            students[count] = s;
            count++;
            cout << "Student Added Successfully!\n";
            break;
        }

        case 2: {
            if (count == 0) {
                cout << "No students available!\n";
            } else {
                cout << "\n--- Student Records ---\n";
                for (int i = 0; i < count; i++) {
                    students[i].displayStudent();
                    cout << "----------------------\\n";
                }
            }
            break;
        }

        case 3: {
            int searchId;
            bool found = false;

            cout << "Enter Student ID to Search: ";
            cin >> searchId;

            for (int i = 0; i < count; i++) {
                if (students[i].getId() == searchId) {
                    cout << "Student Found!\\n";
                    students[i].displayStudent();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student Not Found!\n";
            }
            break;
        }

        case 4: {
            int updateId;
            float newMarks;
            bool found = false;

            cout << "Enter Student ID to Update Marks: ";
            cin >> updateId;

            for (int i = 0; i < count; i++) {
                if (students[i].getId() == updateId) {
                    cout << "Enter New Marks: ";
                    cin >> newMarks;

                    students[i].updateMarks(newMarks);
                    cout << "Marks Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student Not Found!\n";
            }
            break;
        }

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}
