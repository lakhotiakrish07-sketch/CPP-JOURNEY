#include <iostream>
using namespace std ;
class Empolyee{
    public  :
    virtual void salary() = 0 ;
};
class Fulltime : public Empolyee {
    public  :
    void salary(){
        cout<<"salary for full timer is 1000000/annum"<<endl;
    }
};
class intern : public Empolyee {
    public  :
    void salary(){
        cout<<"salary for full timer is 500000/annum"<<endl;
    }
};

int main(){
    Empolyee *ptr = new Fulltime();
    ptr->salary();
    Empolyee *ptr2 = new intern();
    ptr2->salary();
    // Empolyee *ptr3 = new Empolyee();
    // ptr3->salary();will not run becusse we make this as a abstract class 

    delete ptr;
    delete ptr2;
    // delete ptr3;

    return 0;
}