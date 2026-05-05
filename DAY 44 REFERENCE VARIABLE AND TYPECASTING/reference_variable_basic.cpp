#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &ref = a;

    cout << "Before: " << a << endl;

    ref = 20;

    cout << "After: " << a << endl;

    return 0;
}