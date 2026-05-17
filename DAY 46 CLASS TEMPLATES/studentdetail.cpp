#include <iostream>
using namespace std ;
template <class t1 , class t2 >

class Student{
    public :
    t1 name ;
    t2 age ;

    void setdata(t1 name , t2 age ){
        this->age = age ;
        this->name = name ;

    }
    void display (){
        cout<<"name:"<<name<<endl<<"age:"<<age<<endl;
    }
};
int main(){
    Student <string, int > s ;
    s.setdata("krish", 19);
    s.display();
    return 0;
}
