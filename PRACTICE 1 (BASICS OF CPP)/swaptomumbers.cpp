#include <iostream>
using namespace std ;
int main(){
    int x , y ,temp;  
    cin>>x>>y ; 
    cout<<"x="<<x<<endl<<"y="<<y ;
    temp = x ;
    x=y;
    y=x;
    cout<<"after swapping"<<endl;
    cout<<"x="<<x<<endl<<"y="<<y;
    
    return 0 ;
}