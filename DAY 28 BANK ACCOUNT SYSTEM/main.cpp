#include <iostream>
using namespace std;

class BankAccount {
public:
    string name;
    int accNumber;
    float balance;

    // Default Constructor
    BankAccount() {
        name = "Unknown";
        accNumber = 0;
        balance = 0;
    }

    // Parameterized Constructor
    BankAccount(string n, int acc, float bal) {
        name = n;
        accNumber = acc;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount) {
        if(amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "----------------------\n";
    }
};

int main() {
    BankAccount acc[3];

    // Create accounts
    for(int i = 0; i < 3; i++) {
        cout << "Enter Name, Account No, Initial Balance: ";
        cin >> acc[i].name >> acc[i].accNumber >> acc[i].balance;
    }

    int choice, accNo;
    float amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display All\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Account No: ";
                cin >> accNo;
                cout << "Enter amount: ";
                cin >> amount;

                for(int i = 0; i < 3; i++) {
                    if(acc[i].accNumber == accNo) {
                        acc[i].deposit(amount);
                    }
                }
                break;

            case 2:
                cout << "Enter Account No: ";
                cin >> accNo;
                cout << "Enter amount: ";
                cin >> amount;

                for(int i = 0; i < 3; i++) {
                    if(acc[i].accNumber == accNo) {
                        acc[i].withdraw(amount);
                    }
                }
                break;

            case 3:
                for(int i = 0; i < 3; i++) {
                    acc[i].display();
                }
                break;
        }

    } while(choice != 4);

    return 0;
}