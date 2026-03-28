#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Square Root: " << sqrt(n) << endl;
    cout << "Cube Root: " << cbrt(n) << endl;
    cout << "Power (n^2): " << pow(n, 2) << endl;
    cout << "Ceil: " << ceil(n) << endl;
    cout << "Floor: " << floor(n) << endl;

    return 0;
}