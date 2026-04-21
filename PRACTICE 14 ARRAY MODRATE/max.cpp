#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 1, 9, 3};
    int n = 5;

    int mx = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) mx = arr[i];
    }

    cout << mx; // 9
    return 0;
}