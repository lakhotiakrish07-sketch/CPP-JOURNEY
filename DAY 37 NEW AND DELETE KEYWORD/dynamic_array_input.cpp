#include <iostream>
using namespace std ;
int main(){
    int* arr = new int[5];
    for(int i=0;i<5;i++){
        cout<<"enter arr["<<i<<"]"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<"arr["<<i<<"]:"<<arr[i]<<endl;
        
    }
    delete[] arr;
    
    return 0;
}