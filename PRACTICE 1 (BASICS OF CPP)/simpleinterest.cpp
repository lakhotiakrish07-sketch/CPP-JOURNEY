#include <iostream>
using namespace std;
int main(){
    float p , r , t , si ;
    cout<<"principle amount:";
    cin>>p;
    cout<<"time:";
    cin>>t;
    cout<<" rate of interest:";
    cin>>r;

    si = (p*r*t)/100;
    cout<<"simple interest :"<<si<<endl ;
    return 0 ;
    

}