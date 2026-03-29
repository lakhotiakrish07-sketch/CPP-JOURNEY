#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    int n;
    cin >> x >> n;

    double result = pow(x, n);

    cout << "Result: " << result;
    return 0;
}