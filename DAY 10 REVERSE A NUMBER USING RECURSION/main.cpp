#include <iostream>
using namespace std;

int reverse(int x, int rev = 0){
    
    if(x == 0)
        return rev;

    rev = rev * 10 + x % 10;

    return reverse(x / 10, rev);
}

int main(){
    cout << reverse(1003429834);
    return 0;
}