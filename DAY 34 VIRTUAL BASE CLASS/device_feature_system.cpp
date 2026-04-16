#include <iostream>
#include <string>
using namespace std ;
class Device {
    public:
    string name;
    void setdata(){
        cout<<"enter the name of device :"<<endl;
        cin>>name;
    }
    void getdata(){
        cout<<"device name:"<<name<<endl;
    }
};
class Camera : virtual public Device{};
class Music_player : virtual public Device{};
class Smartdevice: public Camera , public Music_player {};
int main(){
    Smartdevice s;
    s.setdata();
    s.getdata();
    return 0 ;
}