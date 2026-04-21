#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    int l = 0, r = n - 1;
    while (l < r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++; r--;
    }

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}