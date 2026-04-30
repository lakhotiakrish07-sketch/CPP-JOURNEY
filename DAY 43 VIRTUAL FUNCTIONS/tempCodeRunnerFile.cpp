#include <iostream>
using namespace std ;
class Animal{
    public :
    virtual void sound (){
        cout<<"animal sound "<<endl;
    }
};
class Dog :public Animal{
    public:
    void sound (){
        cout<<"dog barks"<<endl;
    }
};
class cat :public Animal{
    public:
    void sound (){
        cout<<"cat meow"<<endl;
    }
};
int main(){
    Animal *a = new Animal();