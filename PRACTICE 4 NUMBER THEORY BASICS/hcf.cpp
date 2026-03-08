//hcf the largest number that devide teo numbers 
#include <iostream>
using namespace std ;
int main(){
    int x, y ;
    cout<<"enter two values for hcf:"<<endl;
    cin>>x>>y ;
    int num ;
    if(x>=y ){
        num = y;
    }
    else{
        num = x ;
    }


    for(int i=num ;i>0;i--){
        if(x%i==0 && y%i==0){
            cout<<i<<"is the hcf of "<<x<<"and"<<y<<endl;
            break;
        }
        else{
            continue;
        }
    }
    return 0 ;
}