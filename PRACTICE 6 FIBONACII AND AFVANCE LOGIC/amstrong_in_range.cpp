#include <iostream>
using namespace std;
int main(){
    for (int x = 0;x<=1000;x++){
        //fist we assigned the power = no of digits 
        int temp = x;
        int power = 1;
        while (temp/10!=0){
            power++;
            temp = temp/10;
        }
        // cout<<power; this i write so that i can caheck i write the power logic correct
    
        //making sum of the powers of digit ;
        int n1=0;
        int n2=x;
        int sum = 0;
        while(n2!=0){
            n1 = n2%10;
            int n1_power=1;
            for(int i = 1; i<=power ;i++){
                n1_power = n1_power*n1; 
            }
            sum = sum + n1_power;
            n2 = n2/10;
        }
        //making condition of armstrong number;
        if(sum==x){
                cout<<x<<endl;
            }

            




    }
    return 0;
}