#include <iostream>
using namespace std;
class Student
{

public:
    int id;
    int marks;
    void setdata(void)
    {
        cout << "enter id:";
        cin >> id;
        cout << "enter marks:";
        cin >> marks;
    }

    void showdata(void)
    {
        cout << "id: " << id << endl
             << "marks: " << marks << endl;
    }
};

void checkresult(Student o)
{

    if (o.marks >= 40)
    {
        cout << "pass" << endl;
    }
    else
    {
        cout << "fail!" << endl;
    }
}

int main()
{
    Student s[5];
    int highest = 0 ;
    for (int i = 0; i < 5; i++)
    {
        s[i].setdata();
        
    }
     for (int i = 0; i < 5; i++)
    {
        cout<<"-----------------------------------------------------------------------------------"<<endl ;
        s[1].showdata();
        checkresult(s[i]);
          if (s[i].marks >= highest)
        {
            highest = s[i].marks;
        }
    }

    
    cout << "hishest marks :" << highest << endl;

    return 0;
}
//sample output and input
