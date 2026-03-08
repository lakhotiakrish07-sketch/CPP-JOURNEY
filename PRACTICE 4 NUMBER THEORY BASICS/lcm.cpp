//lcm is the least number which is common multiple of of two numbers 

#include <iostream>
using namespace std ;
int main(){
    int x, y ;
    cout<<"enter two values for lcm:"<<endl;
    cin>>x>>y ;
    int num ;
    if(x>=y ){
        num = y;
    }
    else{
        num = x ;
    }


    for(int i=num ;;i++){
        if(i%x==0 && i%y==0){
            cout<<i<<"is the lcm of "<<x<<"and"<<y<<endl;
            break;
        }
        else{
            continue;
        }
    }
    return 0 ;
}