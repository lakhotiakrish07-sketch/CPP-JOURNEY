// Neon Number
// A Neon number is a number where:
// Square of the number → sum of digits of that square = original number

#include <iostream>
using namespace std ;
int main(){
    int num , square_num, sum_digit =0,digit ;
    bool result = true ;
    cout<<"enter any number:"<<endl;
    cin>>num;
    square_num=num*num;
    digit = square_num ;
//example of 81 
    while(digit/10!=0){
        sum_digit = sum_digit + (digit %10); //1
        digit = digit/10;
    }
    sum_digit = sum_digit + digit;
    if(sum_digit==num){
        cout<<num<<" is a neon number"<<endl;
    }
    else{
        cout<<num<<" is not a neon number"<<endl;
    }
    return 0;
    

}