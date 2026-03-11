#include <iostream>
using namespace std;
class Account{
    private:
    float balance ;
    int account_number ;

    public:
    float setbalance(float b){
        balance = b;
    }
    int setaccount_number(int a){
        account_number =a;
    }

    void show(){
        cout<<"your balance is : "<<balance<<endl;
        cout<<"your account number is : "<<account_number<<endl;
    }
};

int main(){
    Account s1;
    s1.setaccount_number(9218263);
    s1.setbalance(938462.29836);
    s1.show();
    return 0;
}