#include <iostream>
#include <string>
using namespace std ;
class Student{
    public:
    string name ;
    int marks;

    void setData(string n , int m){
        name  = n , 
        marks = m ;

    }
    void getData(){
        cout<<"name:"<<name<<"||"<<" marks:"<<marks<<endl;
    }
};
int main(){
    int num;
    cout<<"enter the number of student:";
    cin>>num;

    //creating an dynamic array 

    Student *ptr = new Student[num];

    //taking inputs 

    for(int i = 0 ; i < num ; i++){
        string n ;
        int m;
        cout<<"enter name"<<i+1<<":"<<endl;
        cin>>n;
        cout<<"enter marks"<<i+1<<":"<<endl;
        cin>>m;
        ptr[i].setData(n,m);
        
    }

    //displaying data and find max marks
    int max_marks = 0 ;
    for (int i=0 ; i<num;i++){
        (ptr+i)->getData();
        
    }
    //finding max
    for (int i=0 ; i<num;i++){
        if(ptr[i].marks>=max_marks){
            max_marks = ptr[i].marks;
        } 

    }
    cout<<"max_marks:"<<max_marks<<endl;
    delete[] ptr;
    return 0 ;


}
