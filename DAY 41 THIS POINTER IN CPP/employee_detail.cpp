#include <iostream>
#include<string>
using namespace std ;
class Employee{
    int id ;
    string name ;
    public:
    void setdata(string name , int id){
        this->name = name ;
        this->id = id ;
    }
    void display(){
        cout<<"name:"<<name<<endl<<"id:"<<id<<endl;
    }
    
};
int main(){
    Employee e ;
    e.setdata("krish", 193849283);
    e.display();
    return 0;
}
