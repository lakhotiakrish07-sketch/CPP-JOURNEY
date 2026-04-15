#include <iostream>
using namespace std ;
class Teacher {
    public :
    void role(){
        cout<<"he/she teaches"<<endl;
    }
};
class Student {
    public:
    void role(){
        cout<<"he/she studies"<<endl;
    }
};
class Person : public Student ,public Teacher{};
int main(){
    Person p ;
    p.Teacher::role();
    p.Student::role();
    return 0 ;
}
