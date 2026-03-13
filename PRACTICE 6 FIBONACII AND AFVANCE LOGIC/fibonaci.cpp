#include <iostream>
using namespace std;
int main(){
    int num ,nth;
    cout<<"enter a numeer:"<<endl;
    cin>>num;

    int a=0,b=1 , c;
    for(int i = 1 ; i<=num ; i++){
        if (i==1){
            cout<<a<<" ";
            nth = a;
        }
        else if(i==2){
            cout<<b<<" ";
            nth = b;
        }
        else{
            cout<<a+b<<" ";
            nth = a+b;
            c=b;
            b=a+b;
            a=c;
            
        }
    }
    cout<<"the" <<num<<"th fabinocii series is :"<<nth;
    return 0;
}
