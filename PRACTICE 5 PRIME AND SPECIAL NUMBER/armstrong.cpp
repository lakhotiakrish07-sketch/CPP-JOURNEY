#include <iostream>
using namespace std ;
int main(){
    int x;
    cout<<"enter any number:"<<endl;
    cin>>x;
    int power=1 ;
    int sum = 0 ;
    int new_number=x;

    //first we decide the powere = no of digits in a number
    while(true){
        if(new_number/10!=0){
            new_number=new_number/10;
            power++;
        }
        else{
            break;
        }
    }   
    //making sum using digits power
    int new_number1=x;
    int digit ;
    
    

    while(true){
        int number_power = 1;
        if(new_number1/10!=0){
            digit = new_number1%10;
            for(int i =1 ;i<=power ;i++){
                number_power = number_power*digit;
                
            }
            sum = number_power + sum ;
            new_number1 = new_number1/10;
        }
        else{
            digit = new_number1;
            for(int i =2 ;i<=power ;i++){
                number_power = number_power*digit;
            }
            sum=number_power+sum;
            break;
        }
    }
    cout<<"sum of powers of number:"<<sum<<endl;
    cout<<"power of number is :"<<power<<endl;
    if(sum==x){
        cout<<"it is a amstrong number"<<endl;

    }
    else{
        cout<<"it is not a amstrong number"<<endl;
    }
    return 0;
}

    