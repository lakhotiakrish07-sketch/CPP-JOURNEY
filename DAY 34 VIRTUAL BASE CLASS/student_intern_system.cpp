#include <iostream>
#include <string>
using namespace std ;
class Person{
    public:
    string name ;
    void setdata(){
        cout<<"enter your name:"<<endl;
        cin>>name;
    }
    void showdata(){
        cout<<"name:"<<name<<endl;
    }
};
class Student : virtual public Person{};
class Employee:virtual public Person{};

class Intern: public Student , public Employee{};
int main(){
    Intern i ;
    i.setdata();
    i.showdata();
    return 0;
}
