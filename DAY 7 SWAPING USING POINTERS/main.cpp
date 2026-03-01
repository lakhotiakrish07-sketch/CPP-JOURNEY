#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, temp;

    int *ptr = &a;
    int *ptr2 = &b;

    cout << "Initially: a=" << a << " b=" << b << endl;

    temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;

    cout << "After swap: a=" << a << " b=" << b << endl;

    return 0;
}   