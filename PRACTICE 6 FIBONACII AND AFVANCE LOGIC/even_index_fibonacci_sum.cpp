#include <iostream>
using namespace std;
int main(){
    int num ,nth;
    cout<<"enter a numeer:"<<endl;
    cin>>num;
    int even_index_sum = 0 ;

    int a=0,b=1 , c;
    for(int i = 1 ; i<=num ; i++){
        if (i==1){
            cout<<a<<" ";
            nth =a ;
        }
        else if(i==2){
            cout<<b<<" ";
            even_index_sum = even_index_sum +b ;
            nth = b;
        }
        else{
            if(i%2==0){
                cout<<a+b<<" ";
                even_index_sum = even_index_sum + a+b ;
                nth = a+b;
                c=b;
                b=a+b;
                a=c;

            }
            else{
            cout<<a+b<<" ";
            nth = a+b;
            c=b;
            b=a+b;
            a=c;
            }
            
        }
    }
    cout<<"the" <<num<<"th fabinocci series is :"<<nth;
    cout<<"even index fibonacci sum"<<even_index_sum;
    return 0;
}