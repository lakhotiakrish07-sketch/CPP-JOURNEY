#include <iostream>
using namespace std ;
int main(){
    int *num = new int (10);
    cout<<"the value of num is: "<<*num<<endl;
    delete num ;
    

    return 0;
}