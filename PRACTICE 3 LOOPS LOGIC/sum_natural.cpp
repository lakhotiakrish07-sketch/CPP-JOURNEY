#include <iostream>
using namespace std;
int main(){
    int n ;
    int i = 0 ;
    int sum = 0 ;
    cout <<"give me an integer n:";
    cin>>n;
    while(i<=n){
        sum = sum + i;
        i++ ;
    }
    cout<<"sum of "<<n<<" intigers is "<< sum <<endl ;

    return 0;
}
