#include <iostream>
using namespace std ;
template <class t1 = int , class t2 = float >

class Data {
    public :
    t1 a ; 
    t2 b ;
    void getdata (t1 a , t2 b ){
        this->a = a ;
        this->b = b ;

    }
    void display(){
        cout<<"A:"<<a<<" "<<"B:"<<b<<endl;
    }
};
int main(){
    Data <> d ;
    d.getdata(45.5 ,45.5);
    d.display();

    Data<float , float > e ;
    e.getdata(43.2 , 43.2);
    e.display();
    return 0 ;





}