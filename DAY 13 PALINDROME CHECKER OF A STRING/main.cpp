#include <iostream>
#include <string>
using namespace std ;
void palindrome(string name){
    bool result = true ;
    for(int i = 0 ; i<=name.length()-1;i++){
        if(name[i]==name[name.length()-1 - i]){
            result=true;
        }
        else{
            result = false;
            break;
        }
        
    }
    if(result==true){
        cout<<"it is palindrome"<<endl;  
        }
    else {
        cout<<"it is not a palindrome"<<endl;
    }


}
int main(){
    palindrome("vasav");
    palindrome("krish");
    return 0;
}