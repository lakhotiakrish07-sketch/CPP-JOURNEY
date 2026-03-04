#include <iostream>
using namespace std ;
int main (){
    float x, y, z;
    cout<<"enter any three number:";
    cin>>x>>y>>z ;
    if(x>y && x>z){
        cout<<x<<" is greater amoung all";

    }
    else if(y>x && y>z){
        cout<<y<<" is greater amound all";

    }
    else{
        cout<<z<<" is greater amoung all";
    }
    return 0 ;
}