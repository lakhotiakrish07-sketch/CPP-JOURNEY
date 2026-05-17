#include <iostream>
using namespace std ;

template <class t >
class Calculator {
    public :
    t a ; 
    t b ;
    t ad ;
    t add(t a , t b){
        this->a = a ;
        this->b = b;

        ad = a + b ;
        cout<<"addition is :"<<ad<<endl;
    }
};

int main(){
    Calculator <int> c1;
    c1.add(94,10);
    return 0 ;
}