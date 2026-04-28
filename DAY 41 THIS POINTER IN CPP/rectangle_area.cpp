#include <iostream>
using namespace std;
class Area{
    int length , breadth ;
    public:
    void setdata(int length , int breadth){
        this->breadth = breadth;
        this->length = length;
    }
    void displayarea(){
        cout<<"area of rectangle is "<<length*breadth<<endl;
    }

};
int main(){
    Area a ;
    a.setdata(21,10);
    a.displayarea();
    return 0;
}
