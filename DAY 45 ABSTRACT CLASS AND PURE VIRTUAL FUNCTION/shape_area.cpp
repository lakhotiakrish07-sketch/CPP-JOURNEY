#include <iostream>
using namespace std ;
class Shape {
    public :
    virtual void area () = 0;

};
class Rectangle : public Shape {
    public:
    int l , b ;
    void area (){
        cout<<"enter the length of rectangle:";
        cin>>l;
        cout<<"enter the breadth of the rectangle:";
        cin>>b;
        cout<<"area of the rectangle is:"<<l*b<<endl;

    }
};
class Circle : public Shape {
    public:
    int r ;
    void area (){
        cout<<"enter the radious of Circle:";
        cin>>r;
        cout<<"area of the Circle is:"<<3.14 * r * r<<endl;

    }
};
int main(){
    Shape * ptr ;
    ptr = new Rectangle();
    ptr->area();

    ptr = new Circle();
    ptr->area();

    delete ptr ;
    return 0 ;
    
}