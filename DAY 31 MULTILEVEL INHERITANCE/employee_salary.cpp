#include <iostream>
#include <string>
using namespace std; 
class Employee {
    public :
    int id ,level ;

    string name ;
    void setdata();
    
};
void Employee:: setdata(){
        cout<<"enter name :";
        cin>>name ;
        cout<<"enter id:";
        cin>>id;
        cout<<"your level :";
        cin>>level;
    }
class Salary:public Employee{
    protected:
    int s = 1000000 ;
};

class Bonus : public Salary{
    public:
    int bonus  ;
    int totalsalary;
    void display(); 
    void calculate();
};
void Bonus :: calculate(){
    bonus = 1000 * level ;
    totalsalary = s + bonus ;
}
void Bonus :: display(){
    cout <<"name:"<<name<<endl ;
    cout<<"id:"<<id<<endl;
    cout<<"bonus:"<<bonus<<endl ;
    cout<<"total salary :"<<totalsalary<<endl ;
}
int main(){
    Bonus b ;
    b.setdata();
    b.calculate();
    b.display();
    return 0; 
}


