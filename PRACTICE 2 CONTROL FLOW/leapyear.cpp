#include<iostream>
using namespace std ;
int main(){
    int x ;
    cout<<"enter the year:"<<endl;
    cin>>x ;
    if ((x%4==0 && x%100!=0) || (x%4==0 && x%400==0)){
        cout<<x<<"it is a leap year";
    }
    else{
        cout<<x<<"it is not a leap year";
    }
    return 0 ;

}