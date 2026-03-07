#include <iostream>
using namespace std ;
int main(){
    int x ;
    cout<<"give me an integer :";
    cin>>x ;
    int product = 1;
    for(int i = 1 ; i<=x ; i++ ){
        product = product*i ;
    }
    cout<<"factorial of "<<x<<"is"<<product ;
    return 0 ;

}