//    .   
//   ...
//  .....  
// logic{it is constst of 3 triangle right halfspaces , middle starst anf left hald spaces }
#include <iostream>
using namespace std;
int main(){
    int n = 3 ;
    for (int i = 1;i<= n ; i++){
        //first loop for left half triangle of spaces 
        for(int j = n-i; j>0;j--){
            cout<<" ";
        }
        //middle stars triangle
        for(int k = 1;k<=(2*i - 1);k++){
            cout<<"*";
        }
        for(int l = 1 ; l<=n ;l++){
            cout<<" ";
        }
        cout<<endl;


    }
    return 0;
}