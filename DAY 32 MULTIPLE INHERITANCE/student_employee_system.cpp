#include <iostream>
using namespace std;
class Student {
    public:
    int mark;
    void marks(){
        cout<<"enter the marks:"<<endl;
        cin>>mark;
    }
};
class Employee{
    public:
    int salary ;
    void salaryrequest(){
        cout<<"enter desired sarary:"<<endl;
        cin>>salary;
    }
};
class Intern:public Student , public Employee{
    public:
    void result(){
        if (mark>=90 && salary<=100000){
            cout<<"you are hired "<<endl;
        }
        else if (mark<90){
            cout<<"better work on marks"<<endl;
        }
        else if (salary>100000){
            cout<<"out of budget"<<endl;
        }
        else{
            cout<<"sorry we cant hire you "<<endl;
        }
    }
};
int main(){
    Intern  i ;
    i.marks();
    i.salaryrequest();
    i.result();
    return 0 ;
}