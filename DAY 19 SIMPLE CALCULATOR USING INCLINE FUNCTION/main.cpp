#include <iostream>
using namespace std;

// Inline functions
inline int add(int a, int b) {
    return a + b;
}

inline int multiply(int a, int b) {
    return a * b;
}

inline int square(int x) {
    return x * x;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition: " << add(a, b) << endl;
    cout << "Multiplication: " << multiply(a, b) << endl;
    cout << "Square of first number: " << square(a) << endl;

    return 0;
}