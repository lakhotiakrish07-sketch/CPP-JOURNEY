#include <iostream>
using namespace std ;

int change(int &x){
   cout<<"how many marks you got:"<<endl ;
   cin>>x;
   cout<<"new marks:"<<x<<endl ;
   return x;

}

int main(){
    int marks = 0 ;
    int*ptr = &marks;
    //first time change 
    change(marks);
    cout<<marks<<endl;
    //seciond time change 
    change(marks);
    cout<<marks<<endl;

    return 0;

}
