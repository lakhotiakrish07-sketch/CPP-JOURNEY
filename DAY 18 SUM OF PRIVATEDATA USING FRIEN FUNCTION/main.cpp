#include <iostream>
using namespace std ;
class B;//class diclaration
class A{
    int a ;
    friend void  add(A o1 , B o2 );

    public:

    void setnumber(){
        cout<<"enter value of a :"<<endl ;
        cin>>a ;
    }

    void displaynumber(){
        cout<<a<<endl ;

    }

};
class B{
    int b ;
    friend void  add(A o1 , B o2 );

    public :
     void setnumber(){
        cout<<"enter value of b :"<<endl ;
        cin>>b ;
    }

    void displaynumber(){
        cout<<b<<endl ;

    } 
};


void add(A o1 , B o2 ){
  cout<<"sum: " <<o1.a + o2.b<<endl ;
}





int main(){
    A o1 ;
    B o2 ;

    o1.setnumber();
    o1.displaynumber();

    o2.setnumber();
    o2.displaynumber();

    add(o1 , o2);

    return 0 ;


}


