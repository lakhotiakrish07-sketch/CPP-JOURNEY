#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double p , r , t , amount , ci ;

    cout<<"Principal amount: ";
    cin>>p;

    cout<<"Time (in years): ";
    cin>>t;

    cout<<"Annual interest rate: ";
    cin>>r;

    amount = p * pow((1 + r/100), t);
    ci = amount - p;

    cout<<"Compound Interest: "<<ci<<endl;
    cout<<"Total Amount: "<<amount<<endl;

    return 0;
}