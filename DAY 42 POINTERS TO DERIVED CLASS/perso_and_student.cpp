#include <iostream>
#include <string>
using namespace std;
class Person{
    public:
    string name ;
    
    void setname(string name ){
        this->name = name ;
    }
};

class Student : public Person{
    public :
    int marks;
    void setmarks(int marks ){
        this->marks = marks ;

    }
    void getdata(){
        cout<<"marks:"<<marks<<endl<<"name:"<<name<<endl;
    }
};

int main(){
    //pointer to derived class 
    Student *ptr = new Student();
    ptr->setmarks(12);
    ptr->setname("krish");
    ptr->getdata();

    //pointer to base class 
    Person *ptrp = new Student();
    // ptrp->setmarks(50);
    ptrp->setname("krish");
    // ptrp->getdata();

    delete ptr;//we use box [] only in array 
    delete ptrp ;
    return 0 ;

}