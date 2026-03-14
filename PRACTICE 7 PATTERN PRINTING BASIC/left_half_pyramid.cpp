//     .
//    ..
//   ...
//logic [the spaces before start is n-i]
#include <iostream>
using namespace std;
int main(){
    int x ;
    cout<<"enter a number:"<<endl;
    cin>>x;
    for(int i = 1 ;i<=x ;i++){
        for(int j = x-i;j; j--){
            cout<<" ";
        }
        for(int k = 1 ; k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}