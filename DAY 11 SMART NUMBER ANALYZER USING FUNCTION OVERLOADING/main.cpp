#include <iostream>
using namespace std;

void analyzer(int a){

    if(a % 2 == 0){
        cout<<a<<" is even"<<endl;
    }
    else{
        cout<<a<<" is odd"<<endl;
    }

    int count = 0;

    for(int i = 1; i <= a; i++){
        if(a % i == 0){
            count++;
        }
    }

    if(count == 2){
        cout<<a<<" is a prime number"<<endl;
    }
    else{
        cout<<a<<" is not a prime number"<<endl;
    }
}

void analyzer(int a, int b){

    int start, end;

    if(a > b){
        cout<<"Max: "<<a<<endl;
        cout<<"Min: "<<b<<endl;
        start = b;
        end = a;
    }
    else if(a == b){
        cout<<"Both numbers are equal"<<endl;
        start = a;
        end = b;
    }
    else{
        cout<<"Max: "<<b<<endl;
        cout<<"Min: "<<a<<endl;
        start = a;
        end = b;
    }

    cout<<"Prime numbers between "<<start<<" and "<<end<<":"<<endl;

    for(int i = start; i <= end; i++){

        int count = 0;

        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                count++;
            }
        }

        if(count == 2){
            cout<<i<<" ";
        }
    }

    cout<<endl;
}

int main(){

    analyzer(5);
    analyzer(10,15);

    return 0;
}