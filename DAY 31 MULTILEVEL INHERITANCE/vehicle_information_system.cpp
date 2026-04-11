#include<iostream>
#include <string>
using namespace std ;
class Vehicle {
    public :
    string brand ;

    void brandname(){
        cout<<"tata"<<endl;
    }
};
class Car : public Vehicle{
    public:
    void average(){
        cout<<"28.45"<<endl ;
    }
};
class Speed : public Car {
    public:
    void topspeed(){
        cout<<"top speed :"<<"235"<<endl;
    }
};
int main(){
    Speed c ;
    c.brandname();
    c.average();
    c.topspeed();
    return 0; 
}