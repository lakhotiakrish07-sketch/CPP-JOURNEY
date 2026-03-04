#include <iostream>
using namespace std;
int main(){
    char x ;
    cout<<"type any character"<<endl;
    cin>>x;
    if ((x=='a') || (x=='e')|| (x=='i') || (x=='o') || (x=='u' )|| (x=='A') || (x=='E') || (x=='I') || (x=='O')|| (x=='U')){
        cout<<"it is a vowel";
    }
    else{
        cout<<"it is a consonent";
    }
    return 0 ;
}