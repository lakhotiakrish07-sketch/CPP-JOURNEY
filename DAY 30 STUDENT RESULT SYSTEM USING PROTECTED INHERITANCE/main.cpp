#include <iostream>
#include <string>
using namespace std ;
class Person{
    protected:
    int age ;
    string name ;

};

class Student : public Person{
    protected:
    int marks ;
    public:
    int totalmarks;
    int x;

    void set_data(){
        totalmarks = 0;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter age :";
        cin>>age;
        cout<<"enter number of exams:";
        cin>>x;
        for (int i = 1 ; i<=x;i++){
            cout<<"marks[i]:";
            cin>>marks;
            totalmarks = totalmarks + marks ;
        }
        

    }
};

class Result : public Student {
    public:
    int percentage ;

    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"total marks:"<<totalmarks<<endl;
        cout<<"percentage:"<<(totalmarks*100)/(x*100)<<endl;
    }
};
int main(){
    Result r1 ;
    r1.set_data();
    r1.display();
    return 0 ;
}