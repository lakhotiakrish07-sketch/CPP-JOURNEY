#include <iostream>
using namespace std ;
class Student{
    int marks ;
    public:
    void SetMarks(int marks){
        this->marks = marks ;

    }
    void display(){
        cout<<"marks:"<<marks<<endl;
    }
};
int main(){
    Student s ;
    s.SetMarks(50);
    s.display();
    return 0 ;
}