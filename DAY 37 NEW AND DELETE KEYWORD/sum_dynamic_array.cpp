#include <iostream>
using namespace std ;
int main(){
    int* arr = new int[5];
    int sum = 0;
    for(int i=0;i<5;i++){
        cout<<"enter arr["<<i<<"]"<<endl;
        cin>>arr[i];
        sum = sum + arr[i];

    }
    for(int i=0;i<5;i++){
        cout<<"arr["<<i<<"]:"<<arr[i]<<endl;
        
        
    }
    cout<<"sum of array is :"<<sum<<endl;
    delete[] arr;
    
    return 0;
}