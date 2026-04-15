#include <iostream>
using namespace std ;
class Fulltime{
    public:
    void salary(){
        cout<<"Full time salary : 100000"<<endl;
    }
};
class Parttime{
    public:
    void salary(){
        cout<<"Part time salary : 50000"<<endl;
    }
};
class Employee:public Fulltime , public Parttime{};
int main(){
    Employee e ;
    e.Fulltime::salary();
    e.Parttime::salary();
    return 0;
}