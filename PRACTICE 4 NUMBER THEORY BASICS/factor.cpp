// in this we are going to see that do a number is factors of a number 
#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<"factors of "<<n<<"is:"<<endl ;
    for (int i =1 ;i<=n;i++){
        if (n%i==0){
            cout<<i<<endl;
        }
        else{
            continue;
        }
    }
    return 0 ;
}