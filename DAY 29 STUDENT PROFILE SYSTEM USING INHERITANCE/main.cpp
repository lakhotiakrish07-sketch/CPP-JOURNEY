#include <iostream>
#include<string>
using namespace std ;
class Person{
    public:
    int id ;
    string name ;
    int age;

    Person(int a , int b , string c ){
        id = a ;
        age = b;
        name = c ;

    }
};
class Student : public Person{
    public :
    int marks ;
    Student (int a , int b , string c):Person(a,b,c){};
    void getmarks(){
        cout<<"enter marks :"<<endl;
        cin>>marks;
    }
    void display(){
        cout<<"age:"<<age<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main(){
    Student s1(9394 , 19 , "krish");
    s1.getmarks();
    s1.display();
    return 0 ;
}