#include <iostream>
using namespace std ;
int main (){
    float temp , celsious ;
    cout<<"temp in fahrenheit:"<<endl ;
    cin>>temp ;
    celsious = ((temp - 32)*5/9);
    cout<<"temp in celsious :"<<celsious<<endl;
    return 0 ;
}