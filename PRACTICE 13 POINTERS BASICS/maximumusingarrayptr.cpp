#include <iostream>
using namespace std;

int main() {
    int a = 15, b = 25, c = 10;

    int* arr[3] = {&a, &b, &c};

    int max = *arr[0];

    for(int i = 1; i < 3; i++) {
        if(*arr[i] > max) {
            max = *arr[i];
        }
    }

    cout << "Maximum value: " << max << endl;

    return 0;
}