#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 3};
    int n = 5;

    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    int newLength = j + 1;

    for (int i = 0; i < newLength; i++) cout << arr[i] << " ";
    cout << "\nLength: " << newLength;

    return 0;
}