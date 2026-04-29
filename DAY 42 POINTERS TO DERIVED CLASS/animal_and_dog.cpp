#include <iostream>
using namespace std ;
class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
int main(){
    Dog *ptr = new Dog();
    ptr->bark();
    ptr->eat();
    

    //base class pointer 
    Animal *ptra = new Dog();
    ptra->eat();
    // ptra->bark(); Access depends on pointer type, not object type
    return 0 ;
}