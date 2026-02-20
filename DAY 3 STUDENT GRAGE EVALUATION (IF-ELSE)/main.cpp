#include <iostream>
using namespace std;
int main (){
    int marks ;
    cout<<"enter your marks:"<<endl ;
    cin>>marks;

//if else condition using if else ladder
if(marks>=90 && marks<=100){
    cout<<"O"<<endl;
} 
else if (marks>=80 && marks<90 ){
    cout<<"A+"<<endl ;

}
else if (marks>=70 && marks<80){
    cout<<"A"<<endl ;

}
else if (marks>=60 && marks <70){
    cout<<"B"<<endl ;
}
else if (marks>=50 && marks < 60){
    cout<<"c"<<endl ;
}
else {
    cout<<"you failed !"<<endl;
}
return 0;

}
