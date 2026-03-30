#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;

    int* arr[3];   // array of pointers

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    cout << *arr[0] << endl; // 10
    cout << *arr[1] << endl; // 20
    cout << *arr[2] << endl; // 30

    return 0;
}