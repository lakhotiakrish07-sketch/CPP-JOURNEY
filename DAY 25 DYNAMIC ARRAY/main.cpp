#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    // Handle invalid input
    if (n <= 0) {
        cout << "Invalid size!" << endl;
        return 0;
    }

    // Dynamic allocation
    int *arr = new int[n];

    // Input elements
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average
    double avg = (double)sum / n;

    // Output
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    // Free memory
    delete[] arr;

    return 0;
}