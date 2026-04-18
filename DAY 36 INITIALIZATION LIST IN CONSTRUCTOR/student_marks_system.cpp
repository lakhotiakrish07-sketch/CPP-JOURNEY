#include <iostream>
using namespace std;
#include <string>
class Student{
    public:
    string name ;
    int marks ;
    
    Student(string a , int b):name(a),marks(b){}
    void display(){
        cout<<"name:"<<name<<endl<<"marks:"<<marks<<endl;
    }

};
int main(){
    Student s("krish" , 99);
    s.display();
    return 0;
}