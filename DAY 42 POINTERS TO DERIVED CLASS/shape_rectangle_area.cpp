#include <iostream>
using namespace std ;
class Shape {
    public:
    void area(){
        cout<<"area is :"<<endl;

    }
};
class Rectangle : public Shape {
    public :
    int length ,  breadth ;
    void getdata (int length , int breadth ){
        this->breadth = breadth ;
        this->length = length ;

    }
    void show(){
        cout<<length*breadth;
    }
} ;
int main(){
    //pointer to derived class '
    Rectangle *ptr  = new Rectangle();
    ptr->getdata(12,10);
    ptr->area();
    ptr->show();

    delete ptr ;
    return 0 ;
}