#include <iostream>
using namespace std; 
class Box{
    public:

    Box(){
        int x, y, z;
        cout<<"enter length of box:";
        cin>>x;
        cout<<"enter breadth of box:";
        cin>>y;
        cout<<"enter hight of box:";
        cin>>z;
        if(x==y&&(y==z)){
             cout<<"volume of cube is :"<<x*x*x<<endl;
        }
        else{
            cout<<"volume of rectangle is :"<<x*y*z<<endl;
             }
        
        
    }
    Box(int x){
        cout<<"volume of cube is :"<<x*x*x<<endl;
    }

    Box(int x , int y, int z){
        cout<<"volume of rectangle is :"<<x*y*z<<endl;
    }
};
int main(){
    Box b1;
    Box b2(4);
    Box b3(1,2,3);

    return 0;
}