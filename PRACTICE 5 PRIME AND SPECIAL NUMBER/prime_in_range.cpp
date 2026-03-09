// prime numbers between two numbers
#include <iostream>
using namespace std;

int main(){

    int x, y;
    cout<<"Enter two numbers:"<<endl;
    cin>>x>>y;
    int start_point, end_point;
//starting point is a smaller number and end is larger number 
    if(x > y){
        start_point = y;
        end_point = x;
    }
    else{
        start_point = x;
        end_point = y;
    }

    //checking on every number between given number
    for(int i = start_point; i <= end_point; i++){

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

    return 0;
}