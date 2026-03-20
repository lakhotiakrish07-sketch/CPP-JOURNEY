#include <iostream>
#include <string>
using namespace std ;
string reverse (string n){ //n=krish
string rev ;
if (n.length()>0){
rev = n[n.length()-1] + reverse (n.substr(0,n.length()-1));
return rev ;
}
else if (n.length()==0){
    return "";
}
}

int main(){
    cout <<reverse("krish");
    return 0;
}