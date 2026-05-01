#include <iostream>
#include <string>
using namespace std ;
class Employee{
    protected:
    int id ;
    string name ;
    public:
    virtual void setdata(){
        cout<<"enter name :";
        cin>>name ;
        cout<<"enter id:";
        cin>>id ;
    }
    virtual void display(){
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        
    }

};
class Fulltime : public Employee {
    protected :
    int salary , bonus ,total;
    public:
    void setdata(){
        Employee::setdata();
        cout<<"enter the salary :";
        cin>>salary;
        cout<<"enter the bonus:";
        cin>>bonus;
        total = salary + bonus ;
        
    }
     void display(){
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        cout<<"salary:"<<salary<<endl;
        cout<<"bonus:"<<bonus<<endl;
        cout<<"total salary:"<<total<<endl;
        
    }
};
class Parttime : public Employee{
    protected:
    int salary , bonus ,total;

    public:
    void setdata(){
        Employee::setdata();
        cout<<"enter the salary :";
        cin>>salary;
        cout<<"enter the bonus:";
        cin>>bonus;
        total = salary + bonus ;
         
    }
     void display(){
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        cout<<"salary:"<<salary<<endl;
        cout<<"bonus:"<<bonus<<endl;
        cout<<"total salary:"<<total<<endl;
        
    }
};

class Freelancer : public Employee{
    protected:
    int hours , rate , total ;

    public :
    void setdata(){
        Employee::setdata();
        cout<<"enter hours worked :";
        cin>>hours;
        cout<<"enter the rate:";
        cin>>rate;
        total = rate*hours ;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        cout<<"hours:"<<hours<<endl;
        cout<<"rate:"<<rate<<endl;
        cout<<"salary:"<<total<<endl;
        
    }
    
};

int main(){
    int n;
    cout<<"enter the number of employee :"<<endl;
    cin>>n;
    Employee** ptr = new Employee*[n];
    for (int i = 0 ;i<n;i++){
        int option ;
        cout<<"1.Fulltime  2.Parttime  3.Freelance "<<endl;
        cin>>option ;
        if(option ==1){
           ptr[i] = new Fulltime();
           ptr[i]->setdata();
            

        }
        else if (option ==2 ){
            ptr[i]= new Parttime();
            ptr[i]->setdata();
        }
        else if (option==3){
            ptr[i]= new Freelancer();
            ptr[i]->setdata();

        }
        else{
            cout<<"wrong option try again:";
            i--;
            
        }
    }
    for (int i = 0 ;i<n;i++){
        ptr[i]->display();
        cout<<"------------------------------------------------------------------"<<endl;
        
    }
    delete[] ptr ;
    return 0;


    

}

