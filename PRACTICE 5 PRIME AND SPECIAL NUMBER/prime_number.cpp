#include <iostream>
using namespace std ;
int main(){
    int num ;
    cout<<"enter any number:"<<endl;
    cin>>num;
    int i = 1 ;
    int count = 0 ;
    while (i<=num){
        if(num%i==0){
            if(i==1 || i==num){
                count+=1 ; 
            }
        }
        i++;
}
    if(count==2){
        cout<<num<<" is a prime number"<<endl ;
    }
    else{
        cout<<num<<" is not a prime number."<<endl;
    }
    return 0 ;

}