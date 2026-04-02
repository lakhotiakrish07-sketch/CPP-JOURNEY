#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name ;
    int marks ;
    Student(string n , int m){
        name = n ;
        marks = m ;
    }
    Student(const Student &obj){
        name = obj.name;
        marks = obj.marks;

    }

    void display(){
        cout<<name<<" "<<marks<<endl;

    }
};

int main(){
    Student s1("krish",188);
    Student s2(s1);

    s1.display();
    s2.display();
    return 0;
}