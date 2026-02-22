#include <iostream>
using namespace std ;
int main(){
    int num ;
    int x ; 
    cout<< "enter number:";
    cin >>num;
    cout<<"1.print number form 1 to n \n2.print even number till end\n3.generate multiplication table \n"<<endl;
    cin>> x ;

if(x==1){
    for(int i = 1 ; i <=num ; i++){
        cout<< i ;
    }
}
else if(x==2){
    for (int i = 0; i <= num ; i++){
        if (i%2 == 0 ){
            cout<< i <<endl ;
        }
    }

}
else if (x==3){
    for(int i = 0 ; i<=10 ; i++){
        cout<<i<<"x"<<num<<"="<<i*num<<endl;
    }
}
else{
    cout<<"invalid input !";
}   

  



return 0;
}





