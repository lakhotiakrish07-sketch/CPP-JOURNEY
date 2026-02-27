#include <iostream>
using namespace std ;
//function prototype 
float add(float a , float b);
float sub(float a , float b);
float mul(float a , float b);
float divide(float a , float b);
float sqr(float a);

//fun defination 
float add(float a , float b){
    return a+b ;
}
float sub(float a , float b){
    return a-b ;
}
float mul(float a , float b){
    return a*b ;
}
float divide(float a , float b){
    if (b==0) {
        cout<<"b cannot be zero";
        return 0 ;
    }
    else{
    return a/b ;
}
}

float sqr(float a ){
    return a*a ;
}

int main (){
//fun calling
cout<<add(3.5,1)<<endl ;
cout<<sub(3.5,1)<<endl ;
cout<<mul(3.5,1)<<endl ;
cout<<sqr(3.5)<<endl ;
cout<<divide(10,5)<<endl;
return 0;
}