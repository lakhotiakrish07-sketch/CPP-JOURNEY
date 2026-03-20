#include <iostream>
using namespace std ;
int power(int a , int b){
    if(b>1){
        return a*power(a,b-1);
    }
    else if (b==1){
        return a;
    }
    else if (b==0){
        return 1 ;
    }

}
int main (){
    cout<<power(5,3);
    return 0;
}