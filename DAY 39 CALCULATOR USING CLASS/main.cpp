#include <iostream>
using namespace std;

class Calculator {
private:
    double a, b;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add() {
        cout << "Result: " << a + b << endl;
    }

    void subtract() {
        cout << "Result: " << a - b << endl;
    }

    void multiply() {
        cout << "Result: " << a * b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Result: " << a / b << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }
};

int main() {
    Calculator calc;
    int choice;

    do {
        cout << "\n--- Class Calculator ---\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            calc.input();
        }

        switch (choice) {
            case 1: calc.add(); break;
            case 2: calc.subtract(); break;
            case 3: calc.multiply(); break;
            case 4: calc.divide(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}