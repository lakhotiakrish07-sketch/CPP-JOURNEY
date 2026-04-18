#include<iostream>
using namespace std ;
class AreaRectangle{
    public:
    int length , breadth ;
    AreaRectangle(int a , int b):length(a), breadth(b){}
    void display(){
        cout<<"area of rectangle :"<<length*breadth<<endl;
    }
};
int main(){
    AreaRectangle a(5,7);
    a.display();
    return 0 ;

}
