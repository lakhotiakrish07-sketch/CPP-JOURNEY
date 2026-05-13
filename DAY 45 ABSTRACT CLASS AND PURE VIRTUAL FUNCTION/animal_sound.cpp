#include <iostream>
using namespace std ;
class Animal {
    public:
    virtual void sound () =0 ;//pure virtual function 
};
class Dog : public Animal {
    public :
    void sound (){
        cout<<"dog barks !"<<endl;
    }
};
class Cat : public Animal {
    public :
    void sound (){
        cout<<"cat meow... !"<<endl;
    }
};
int main(){
    Animal * ptr ;
    ptr = new Dog();
    ptr->sound();

    ptr = new Cat();
    ptr->sound();

    delete ptr ;
    return 0 ;
}