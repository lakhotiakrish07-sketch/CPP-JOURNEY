#include <iostream>
using namespace std;

int main(){

    int n;
    int sum = 0;

    cout << "size of array: ";
    cin >> n;

    int arr[n];

    // input elements
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // print elements
    cout << "Array elements:" << endl;
    for(int j = 0; j < n; j++){
        cout << *(arr + j) << endl;
    }
    // sum of elements
    for(int j = 0; j < n; j++){
        sum = sum + *(arr + j);
    }
    cout << "sum of array is: " << sum << endl;
    // maximum element
    int max = *arr;
    for(int j = 0; j < n; j++){
        if(*(arr + j) > max){
            max = *(arr + j);
        }
    }
    cout << "max of the array elements: " << max << endl;
    // minimum element
    int min = *arr;

    for(int j = 0; j < n; j++){
        if(*(arr + j) < min){
            min = *(arr + j);
        }
    }
    cout << "min of the array elements: " << min << endl;
    // memory address of each element
    cout << "Memory address of elements:" << endl;
    for(int j = 0; j < n; j++){
        cout << "Element " << j << " address: " << (arr + j) << endl;
    }
    return 0;
}