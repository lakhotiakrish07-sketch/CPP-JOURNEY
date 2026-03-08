//power of a number both enter by user 
#include<iostream>
using namespace std ;
int main(){
    int num , p;
    cout<<"enter number:"<<endl;
    cin>>num;
    cout<<"power:"<<endl;
    cin>>p;
    int num_1 =1 ;
    
    while (p>=1){
        num_1 = num*num_1;
        --p;
    }

    cout<<"ans:"<<num_1;
    return 0;
}