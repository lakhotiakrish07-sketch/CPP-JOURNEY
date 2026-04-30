#include <iostream>
using namespace std ;
class Shape {
    public :
    virtual void area(){
        cout<<"the measure of the 2D surface space a shape covers, measured in square units"<<endl;
    }
};
class Rectangle : public Shape{
    public :
    void area(){
        cout<<"area  of rectangle is = (length * breadth)"<<endl;
    }
};
class circle : public Shape{
    public :
    void area(){
        cout<<"area  of rectangle is = (3.14 * radious * radious )"<<endl;
    }
};
int main(){
    Shape *ptr1 = new Rectangle();
    Shape *ptr2 = new circle();
    Shape *ptr = new Shape();
    ptr1->area();
    ptr2->area();
    ptr->area();

    delete ptr;
    delete ptr1;
    delete ptr2;

    return 0 ;
}