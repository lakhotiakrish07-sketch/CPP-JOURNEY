#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double degree;
    cin >> degree;

    double rad = degree * M_PI / 180;

    cout << "sin: " << sin(rad) << endl;
    cout << "cos: " << cos(rad) << endl;
    cout << "tan: " << tan(rad) << endl;

    return 0;
}