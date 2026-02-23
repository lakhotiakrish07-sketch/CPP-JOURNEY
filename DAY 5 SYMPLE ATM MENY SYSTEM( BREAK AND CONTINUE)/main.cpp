#include<iostream>
using namespace std;
int main(){
    int x ;
    float balance = 0  , deposite = 0 , withdraw = 0;
    
    while(true){
        cout<<"1.balance , 2.deposite , 3.withdraw , 4.exit:\n";
        cin>> x ;
        if (x == 1){
            cout<<balance;
            
        }
        else if (x==2){
            cout<<"deposite amount:\n";
            cin>>deposite;
            balance = balance + deposite ;
        }
        else if (x==3){
            cout<<"withdraw amount:\n";
            cin>> withdraw;
            if (balance >= withdraw){
                balance=balance-withdraw ;
            }
            else{
                cout<<"insufficient balance\n";
                } 
        }
        else if (x==4){
            cout<<"thanks for visiting\n";
            break ;
        } 
        else {
            continue;
        }      
     }
    return 0 ;
}

