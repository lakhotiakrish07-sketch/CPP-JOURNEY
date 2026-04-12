#include <iostream>
using namespace std ;
class Petrolengine{
    public :
    void petrol_info(){
        cout<<"it has a petrol engine"<<endl;
    }

};
class Eletricengine{
    public:
    void battery_info(){
        cout<<"its has a high bettery level"<<endl;

    }
};
class Hubrid_car:public Petrolengine , public Eletricengine{
    public:
    void showtype(){
        cout<<"this is a hybrid car"<<endl;
    }
    
};
int main(){
    Hubrid_car h ;
    h.petrol_info();
    h.battery_info();
    h.showtype();
    return 0 ;
}
